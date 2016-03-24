
#include <stdio.h>
#include <string.h>



void demo_string_array(void)
{
    char str1[] = "hello world";
    char str2[] = "hello ";
    char str3[] = "world";


    char *list[3];
    list[0] = str1;
    list[1] = str2;
    list[2] = str3;

    int i; 
    for(i = 0; i< 3; ++i )
    {
        printf("list[%d] = %s\n", i, list[i]);
    }
}



int main(int argc, char * argv[])
{
    
    int i;
    for( i = 0; i < argc; ++i )
    {
        printf(" argv[%d] = %s \n", i, argv[i]);
    }


    printf("\n\n\n");
    demo_string_array();
    return 0;
}


