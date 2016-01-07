/*
 * Converts distances from miles to kilometers
 */

/* Include standard library functions printf and scanf */
#include <stdio.h>

/* Define a conversion constant */
#define KMS_PER_MILE 1.609


int /* return type of this function*/
main(void) /* Entry point to program - instructions start here */
{
    /* Declare the variables we are going to use */
    double miles, kms;

    /* Get the distance in miles from standard input (command line prompt) */
    printf("Enter the distance in miles: ");
    scanf("%lf", &miles);

    /* Convert the distance to kilometers */
    kms = KMS_PER_MILE * miles;

    /* Display the distance in kilometers */
    printf("That is %f kilometers. \n", kms);

    return (0);
}

