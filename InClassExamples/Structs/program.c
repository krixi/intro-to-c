
#include <stdio.h>
#include <string.h>

#define NAME_SZ 20


struct point {
    int x, y;
    struct point * next;
};

typedef struct point point_t;

typedef struct {
    char name[NAME_SZ]; 
    double diameter;
    int moons;
    double orbit_time;
    double rotation_time;   
} planet_t;


typedef struct {
    planet_t planets[8];
    double size;
    char galaxy[NAME_SZ];
} solar_system_t;


void print_planet(planet_t planet)
{
    printf("Name: %s \n", planet.name);
    printf("Diameter: %.2f KMs\n", planet.diameter);
    printf("# Moons: %d\n", planet.moons);
    printf("Orbit Time: %.4f Years\n", planet.orbit_time);
    printf("Rotation Time: %.4f Hours\n", planet.rotation_time);
    
}

void scan_planet( planet_t * planet )
{
    printf("Scan Planet: Enter the planet info >");
    scanf("%s %lf %d %lf %lf", 
        planet->name, 
        &planet->diameter,
        &planet->moons,
        &planet->orbit_time,
        &planet->rotation_time);
}

planet_t get_planet(void)
{
    planet_t planet;
    scan_planet( &planet );
    return planet;
}


int main(void)
{
    planet_t current_planet;
    planet_t blank_planet = { "", 0, 0, 0, 0 };

    strcpy( current_planet.name, "Jupiter" );
    current_planet.diameter = 142800; 
    current_planet.moons = 16;
    current_planet.orbit_time = 11.9;
    current_planet.rotation_time = 9.925;
    print_planet( current_planet );
    
    printf("\n\n");

    planet_t * plp = NULL;
    //plp = &current_planet;

    //printf("%s\n", (*plp).name);
    if ( plp )
    {
        printf("%s\n", plp->name);
    } else {
        printf("PLP is NULL!\n");
    }
    
    printf("\n\n");
    //print_planet( *plp );

    //scan_planet( &blank_planet );
    //print_planet( blank_planet );


    
    printf("\n\n");


    //planet_t other_planet = get_planet();
    //print_planet( other_planet );

    //int x[20];
    //int y[20];
    point_t polygon[20];
    point_t a;
    a.x = 0;
    a.y = 0;
    polygon[0] = a;
    point_t b = { 2, 3 };
    polygon[1] = b;

    int i;
    for ( i = 0; i < 2; ++i )
    {
        printf("polygon[%d] = (%d, %d)\n", i, polygon[i].x, polygon[i].y);
    }

    return 0;
}

