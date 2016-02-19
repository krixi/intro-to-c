
#include <stdio.h>
#include <math.h>

void 
separate( double num,
          char * signp,
          int * wholep,
          double * fracp)
{
    double magnitude;

    // Determine the sign
    if ( num < 0 )
    {
        *signp = '-';
    } 
    else if ( num > 0 )
    {
        *signp = '+';
    } 
    else 
    {
        *signp = ' ';
    }

    magnitude = fabs(num);
    *wholep = floor(magnitude);
    *fracp = magnitude - *wholep;
}



int main(void)
{
    double value;
    char sign;
    int whole;
    double fraction;

    printf("Enter a value > ");
    scanf("%lf", &value);

    separate(value, &sign, &whole, &fraction);

    printf("%c\n", sign);
    printf("%d\n", whole);
    printf("%f\n", fraction);
    
    return 0;
}
