
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char * to_lower(char * str);

int compare(const char * str1, const char * str2)
{
    printf("comparing %s and %s...\n", str1, str2);
    int result = strcmp(str1, str2);
    printf(" result = %d\n", result);
    if ( result == 0 )
    {
        // they are the same
        printf("same\n");
    } else {
        // they are different
        printf("different\n");
    }
    return result;
}

int compare_case(const char * str1, const char * str2)
{
    char copy1[100];
    char copy2[100];
    strcpy( copy1, str1 );
    strcpy( copy2, str2 );
    to_lower( copy1 );
    to_lower( copy2 );
    
    return compare( copy1, copy2 );
}

char * to_lower(char * str)
{
    printf(" to_lower: processing %s\n", str);
    int len = strlen(str);
    int i;
    for( i = 0; i < len; i++ )
    {
        if ( isupper( str[i] ) )
        {
            str[i] = tolower( str[i] );
        }
    }
    printf(" to_lower: return %s\n", str);
    return str;
}


int main(void)
{
    /*
    char str1[100];
    char str2[100]; 
    //char str2[10] = "         ";

    //str1 = " this is my string"; // DOESN'T WORK
    strcpy(str1, "this is another string");
    printf("str1 = %s \n", str1);

    //printf("enter a word > ");
    //scanf("%s", str1);

    //printf("you entered the string: %s\n", str1);

    printf("enter a sentence > ");
    gets(str2);

    printf("you entered: %s \n", str2);
    */


    char str1[] = "HELLO";
    char str2[] = "hello";
    //compare("Hello", "World");
    //compare("Hello", "Apple");
    //
    
    compare(str1, str2);
    printf("after compare, str1 = %s, str2 = %s \n", str1, str2);

    compare_case(str1, str2);
    printf("after compare_case, str1 = %s, str2 = %s \n", str1, str2);

    //char str1[] = "ABCdefGHI";
    //to_lower(str1);


    

    return 0;
}

