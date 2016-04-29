

#include <stdio.h>

int foo(float num)
{
    return (int)num;
}


int main(void)
{

    int (*ptr)(float) = &foo;
    

    int result = ptr(3.14);    
    printf(" result = %d\n", result);


    return 0;
}







