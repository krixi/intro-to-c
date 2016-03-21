


#include <stdio.h>


void ex1(int x[])
{

}

void ex2(int *x)
{

}


int main(void)
{
    int *p1;
    int *p2 = NULL;
    int *p3 = 0;

    printf("p1 = 0x%x, p2 = 0x%x, p3 = 0x%x\n", p1, p2, p3);

    int num = 7;
    void *p4 = &num;
    int *p5 = p4;

    printf("*p5 = %d\n", *p5);

    int eight = 8;
    int x[] = { 1, 1, 2, 3, 5, eight, 12};
    printf(" x[%d] = %d\n", 5, x[5] );
    
    printf(" *(x + %d) = %d\n", 5, *(x + 5) );

    return 0;
}






