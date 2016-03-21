

#include <stdio.h>



int main(void)
{
    typedef enum {JAN=-2, FEB, MAR, APR=4, MAY } mymonth;


    mymonth m = APR;
    printf("m = %d\n", m);

    
    printf("JAN = %d\n", JAN);
    printf("FEB = %d\n", FEB);
    printf("MAR = %d\n", MAR);
    printf("APR = %d\n", APR);
    printf("MAY = %d\n", MAY);


    return 0;
}

