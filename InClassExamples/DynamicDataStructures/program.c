

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    double other_data;
    int * list;
    int len;
} node_t;

void print_node(node_t * node)
{
    printf("NODE: data = %d, other_data = %f\n", node->data, node->other_data);
    int i;
    for( i = 0; i < node->len; i++ )
    {
        printf(" %d", *(node->list + i) );
    }
    printf("\n");
}


void release( node_t * list, int num )
{

    int i;
    for( i = 0; i< num; i++ )
    {
        free( list[i].list );
        list[i].list = NULL;
    }
    free( list );
    list = NULL;
}


int main(void)
{

    int * nump = (int *)malloc( sizeof( int ) );
    *nump = 13;

    //printf("nump = 0x%x, *nump = %d\n", nump, *nump);

    node_t * nodep = (node_t *)malloc( sizeof( node_t ) );
    nodep->data = 7;
    nodep->other_data = 3.1415;

    printf(" data = %d, other_data = %f\n", nodep->data, nodep->other_data);

    free( nump );
    nump = NULL;
    free( nodep );
    nodep = NULL;

    /* NOTE: memory leak example. 
    while ( 1 )
    {
        int * x = (int *)malloc( sizeof( int ) );
        printf("Enter a value > ");
        scanf("%d", x);
        
        printf("You entered %d\n", *x);
        // free(x);
    }
    */


    node_t * node_list = (node_t *)calloc( 10, sizeof( node_t ) );
    int i; 
    for( i = 0; i < 10; i++ )
    {
        node_list[i].data = i * 3;
        node_list[i].other_data = (i * 3.0) / 2.0;
        int len = i + 1;
        node_list[i].len = len;
        node_list[i].list = (int *)calloc( len, sizeof( int ) );
        int j;
        for ( j = 0; j < len; j++ )
        {
            //*(node_list[i].list + j) = j * 2;
            node_list[i].list[j] = j * 2;
        }
    }

    for( i = 0; i < 10; i++ )
    {
        //printf(" data[%d] = %d\n", i, node_list[i].data);
        print_node( &node_list[i] );
    }

    release( node_list, 10 );

    return 0;
}






