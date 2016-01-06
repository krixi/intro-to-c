/*
 * This file demonstrates pointers, used as function output parameters
 */
#include <stdio.h>

#define KMS_PER_MILE 1.60934

int convertMilesToKMS(double miles, double * kms)
{
    // Set value of kms to 0 (note the * to dereference the pointer)
    *kms = 0;

    if ( miles > 0 )
    {
        // * is used in two places on this line, for two different purposes. 
        // The first use is to dereference the kms pointer, the second is to multiply miles and KMS_PER_MILE.
        *kms = ( miles * KMS_PER_MILE );

        return 1; // successfully converted
    }

    return 0; // not converted
}

int convertKMStoMiles( double kms, double * miles)
{
    *miles = 0;

    if ( kms > 0 )
    {
        *miles = ( kms / KMS_PER_MILE );

        return 1; // successfully converted.
    }

    return 0; // not converted
}


int main(void)
{
    double five_k = 5.0;
    double five_k_miles;

    if ( convertKMStoMiles( five_k, &five_k_miles ) )
    {
        printf("%f kms = %f miles\n", five_k, five_k_miles );
    }
    else
    {
        printf("Unable to convert %f kms to miles \n", five_k );
    }


    double marathon_miles = 26.2188;
    double marathon_kms;

    if ( convertMilesToKMS( marathon_miles, &marathon_kms ) )
    {
        printf("%f miles = %f kms\n", marathon_miles, marathon_kms );
    }
    else
    {
        printf("Unable to convert %f miles to kms \n", marathon_miles );
    }

    return 0;
}

