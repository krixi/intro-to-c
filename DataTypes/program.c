/*
 * This file contains examples of the different data types 
 */
#include <stdio.h>
#include <string.h>

/*
 * Entry point into program. 
 */
int main(void)
{
    /*
     *  Integer - whole numbers
     *  The difference here is the amount of memory consumed, which affects the range available to the number.
     *  Unsigned integers are always positive.    
     */
    short s1 = 123;             // range: -32,767 to 32,767
    unsigned short s2 = 321;    // range: 0 to 65,535
    int i1 = 123;               // range: -32,767 to 32,767
    unsigned i2 = 321;          // range: 0 to 65,535
    long l1 = 133l;             // range: -2,147,483,647 to 2,147,483,647
    unsigned long l2 = 322;     // range: 0 to 4,294,967,295 

    int a = 7;
    int b = 13;
    int result = a * b;
    printf("%d * %d = %d \n", a, b, result);
    
    
    /* Float - decimal numbers */
    float f1 = 0.75f;
    float f2 = 1.33f;
    float f_result = f1 * f2;
    printf("%f * %f = %f \n", f1, f2, f_result);
    double d1 = 1.2313;
   
    /* Characters */ 
    char c1 = 'A';
    char c2 = 'z';


    /* C-Strings (character arrays) */
    char[50] str;
    
    return 0;
}




