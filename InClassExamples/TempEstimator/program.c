/*
 * Marissa Joehler
 * Temperature Estimator - CSCI 112
 * 1/20/2016
 */
#include <stdio.h>

#define MINUTES_PER_HOUR 60.0

/* Function to convert celsius to fahrenheit */
double convertToFahrenheit(double celsius)
{
    double fahrenheit;
    /* 9/5 * celsius +32  */
    fahrenheit = (9.0/5.0) * celsius + 32.0;
    return fahrenheit;
}

/* Program entry point */
int main(void)
{
    /* Declare required variables */
    int minutes;
    double hours, temperature;

    /* Prompt the user for input */
    printf("Please enter the time in whole hours and minutes (HH MM) > ");
    scanf("%lf %d", &hours, &minutes);

    /* Calculate the total hours */
    hours = hours + ( minutes / MINUTES_PER_HOUR );

    /* Calculate the temperature using the provided formula */
    temperature = (4 * (hours * hours) ) / ( hours + 2 ) - 20;

    /* Display the results */
    printf("After %.2f hours, the temperature in the freezer will be %.3f °C, or %.3f °F \n", hours, temperature, convertToFahrenheit( temperature ) );
    
    /* Exit the program with no error */
    return (0);
}

