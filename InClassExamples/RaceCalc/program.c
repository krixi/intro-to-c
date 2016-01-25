/**
 * Marissa Joeher
 * CSCI 112 - Race Calculator example
 * 1/25/2016
 */
#include <stdio.h>

/* Defines for conversion constant */
#define FEET_PER_MILE 5280.0
#define FEET_PER_KM 3282.0
#define RACE_DISTANCE 1.0

/* Declare the function prototypes for all functions in this file. */
void print_instructions(void);
void compute_speed_for_racer(void);
double get_input(void);
double calc_fps(double, double);
double calc_mps(double, double);
double to_feet(double);

/**
 * Main function, entry point to program. 
 */
int
main(void)
{
    // Get all racer's info, perform calculations as requested.
    // NOTE: Typically we would do this in a loop. 
    compute_speed_for_racer();
    compute_speed_for_racer();
    compute_speed_for_racer();
    compute_speed_for_racer();
    
    return 0;
}

/**
 * This prompts the user for the racer's time, then computes the speed of the racer in FPS and MPS and prints out those values. 
 */
void compute_speed_for_racer(void)
{
    double seconds, fps, mps;

    // Break the larger problem into sub-problems:
    // 1) Get the input in seconds
    seconds = get_input();

    // 2) Calculate the speed in FPS using the seconds providied by the user
    fps = calc_fps(RACE_DISTANCE, seconds);
    printf("That is %.3f feet per second\n", fps);

    // 3) Calculate the speed in MPS using the seconds providied by the user
    mps = calc_mps(RACE_DISTANCE, seconds);
    printf("That is %.3f meters per second\n", mps);
}


/**
 * This calculates the number of feet, given the number of miles
 * @param miles The number of miles
 * @return The corresponding number of feet
 */
double to_feet(double miles)
{
    return ( miles * FEET_PER_MILE );
}


/**
 * This calculates speed in feet per second
 * @param miles The distance in miles
 * @param seconds The elapsed time, in seconds
 * @return The speed in feet per second
 */
double calc_fps(double miles, double seconds)
{
    double fps, feet;
    feet = to_feet(miles);
    fps = feet / seconds;
    return fps;
}


/**
 * This calculates speed in meters per second
 * @param miles The distance in miles
 * @param seconds The elapsed time, in seconds
 * @return The speed in meters per second
 */
double calc_mps(double miles, double seconds)
{
    double mps, feet, kms;
    feet = to_feet(miles);

    // convert standard to metric
    kms = feet / FEET_PER_KM;
    mps = ( kms * 1000.0 ) / seconds;

    return mps;
}

/**
 * This prompts the user for input in minutes and seconds, and returns the total time in seconds
 * @return The racer's time, in seconds
 */
double get_input(void)
{
    double seconds;
    int minutes;
    print_instructions();
    scanf("%d %lf", &minutes, &seconds);
    seconds = seconds + ( minutes * 60.0 );
    return seconds;
}


/**
 * This prints out instructions for the user
 */
void print_instructions(void)
{
    printf("Enter the racer's time in minutes and seconds (MM SS.SS) > ");
}

