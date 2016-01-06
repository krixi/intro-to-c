/*
 * This file demonstrates structures
 */
#include <stdio.h>
#include <time.h>

/* 
 * This is the definition of the struct (defines the variables contained within the structure).
 * Note that by itself, this definition doesn't mean anything. You need to create an instance 
 * of the struct and assign values to that instance. 
 */
struct mydatetime
{
    int year;
    int month;
    int day;
    
    int hour;
    int minute;
    int second;
};



// this function prints out the date/time in a nice format.
// Demonstrates struct pointers and -> notation for dereferecing members of a struct pointer. 
void print(struct mydatetime * dt)
{
    // NOTE: The syntax dt->year could also be written as (*dt).year, it just looks nicer this way (syntactic sugar)
    printf("%04d-%02d-%02d %02d:%02d:%02d \n", dt->year, dt->month, dt->day, dt->hour, dt->minute, dt->second );
}



int main(void)
{

    // Declare a new instance of the 'mydatetime' struct, with the variable name 'mdt'. 
    struct mydatetime mdt;

    // Assign values to the members of the struct using the dot . notation since 'mdt' is not a pointer. 
    mdt.year = 2015;
    mdt.month = 4;
    mdt.day = 9;

    mdt.hour = 16;
    mdt.minute = 20;
    mdt.second = 0;

    // the function print() accepts a pointer to a mydatetime struct, so use the ampersand & syntax to pass the address to the struct to the print() function
    print(&mdt);


    // Get the current time from the standard library time.h and print it out, using our struct and function. 
    time_t now_raw = time(NULL);
    struct tm * now_tm = localtime( &now_raw );
    // Copy over to our struct type
    struct mydatetime nowdt;
    nowdt.year  = now_tm->tm_year + 1900; // tm_year is # of years since 1900, so add 1900 to get current year
    nowdt.month = now_tm->tm_mon + 1; // tm_mon range is 0 - 11, add 1 to get 1 - 12
    nowdt.day   = now_tm->tm_mday;
    nowdt.hour  = now_tm->tm_hour;
    nowdt.minute = now_tm->tm_min;
    nowdt.second = now_tm->tm_sec;

    print(&nowdt);

    return 0;
}

