
#include <stdio.h>


typedef struct {
    int data;
    double dbl;
    char str[10];
} node_t;



int main(void)
{
    /*
    FILE * does_not_exist = fopen("somefile.txt", "w");

    if ( does_not_exist ) 
    {
        printf(" file was opened anyways\n");
        fclose( does_not_exist );
    }
    else
    {
        printf(" file pointer returned was null\n");
    }
    */

    int nums[] = { 1, 1, 2, 3, 5, 8 };
    int len = sizeof( nums ) / sizeof ( int );

    FILE * output_bin = fopen("data.bin", "wb");
    if ( output_bin )
    {
        fwrite( nums, sizeof( int ), len, output_bin );
        fclose( output_bin );
    }
   
     
    int nums_in[len];

    FILE * input_bin = fopen("data.bin", "rb");
    if ( input_bin )
    {
        fread( nums_in, sizeof( int ), len, input_bin );

        int i;
        for( i = 0; i < len; i++ )
        {
            printf("%d ", nums_in[i]);
        }
        printf("\n");
        fclose( input_bin );
    }


    node_t node = { .data = 13, .dbl = 3.1415, .str = "mydata" };
    FILE * output_bin2 = fopen("struct.bin", "wb");
    if ( output_bin2 ) 
    {
        fwrite( &node, sizeof( node_t ), 1, output_bin2 );
        fclose( output_bin2 );
    }

    node_t input_node;

    FILE * input_bin2 = fopen("struct.bin", "rb");
    if ( input_bin2 )
    {
        fread( &input_node, sizeof( node_t ), 1, input_bin2 );
        printf("node.data = %d\n", input_node.data );
        printf("node.dbl = %f\n", input_node.dbl );
        printf("node.str = %s\n", input_node.str );
        fclose( input_bin2 );
    }

    return 0;
}



