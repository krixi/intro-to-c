
#include <stdio.h>
#include <string.h>


#define SIZE 10


void demo_strtok(void)
{
    char str[] = "This is a string";
    char copy[50]; 
    strcpy(copy, str);
    printf("str = %s\n", str);
    
    char * word1 = strtok(copy, " ");
    char * word2 = strtok(NULL, " ");
    char * word3 = strtok(NULL, " ");
    char * word4 = strtok(NULL, " ");
    char * word5 = strtok(NULL, " ");


    
    printf("word1 = %s\n", word1);
    printf("word2 = %s\n", word2);
    printf("word3 = %s\n", word3);
    printf("word4 = %s\n", word4);   
    printf("word5 = %s\n", (word5 != NULL ? word5 : "NULL") );
}


void demo_substr(void)
{
    char date[] = "March 23, 2016";
    char copy[SIZE];
    
    strncpy(copy, date+6, 2);
    copy[2] = '\0'; // null terminator;

    printf("date = %s\n", date);
    printf("copy = %s\n", copy);
}


int main(void)
{
    char str2[SIZE];
    char str1[SIZE];
    
    int i;
    for( i = 0; i < SIZE; ++i )
    {
        str1[i] = 'a';
        str2[i] = 'z';
    }
    str2[SIZE-1] = '\0';

    printf("str1 = %s \n", str1);
    printf("str2 = %s \n", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    printf("len1 = %d \n", len1);
    printf("len2 = %d \n", len2);

    printf("\n\n\n");
    demo_substr();

    printf("\n\n\n");
    demo_strtok();
    return 0;
}


