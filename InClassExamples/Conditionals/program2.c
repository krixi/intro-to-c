
#include <stdio.h>


int main(void)
{
    int y = 5;

    switch(y)
    {
        case 1:
        case 2:
        case 3:
        case 5:
        case 6:
            printf(" hit case %d\n", y);
            //break;

        default:
            printf(" default case\n");
        
    }




    int x = 10;
    int i = 3;

    printf("before using i++: x = %d, i = %d\n", x, i);
    x += 5 - i++;
    printf("after using i++: x = %d, i = %d\n", x, i);

    x = 10;
    i = 3;
    printf("before using ++i: x = %d, i = %d\n", x, i);
    x += 5 - ++i;
    printf("after using ++i: x = %d, i = %d\n", x, i);










    return 0;
}


