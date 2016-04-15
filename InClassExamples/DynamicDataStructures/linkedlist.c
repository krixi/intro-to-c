

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 30

typedef struct node {
    int data;
    char str[STR_SIZE];
    struct node * next;
} node_t;

/*
typedef struct othernode othernode_t;
struct othernode {
    int otherdata;
    othernode_t * next;
};
*/

void add_node(node_t ** list, int data, char * newstr)
{
    node_t * newnode = (node_t *)malloc( sizeof( node_t ) );
    newnode->data = data;
    strcpy( newnode->str, newstr );
    newnode->next = NULL; // end of list
    
    if ( *list == NULL )
    {
        printf("Found null list, assigning head element\n");
        *list = newnode;
        return;
    }

    node_t * iter = *list;
    while( iter->next != NULL )
    {
        iter = iter->next;
    }
    iter->next = newnode;
}


void print_list(node_t * list)
{
    node_t * iter = list;
    while ( iter != NULL )
    {
        printf(" data = %d, str = %s\n", iter->data, iter->str);
        iter = iter->next;
    }
}


int main(void)
{
    node_t * list_head = NULL;

    add_node( &list_head, 7, "hello");
    add_node( &list_head, 12, "world");
    print_list( list_head );
    return 0;
}





