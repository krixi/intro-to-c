
#include <stdio.h>

typedef struct {
    double radius, area, circumfrence;
} circle_t;

typedef struct {
    double area, perimeter, side;
} square_t;

typedef struct {
    double area, perimeter, width, height;
} rectangle_t;

typedef union {
    circle_t circle;
    square_t square;
    rectangle_t rect;
} shape_t;



int main(void)
{
    shape_t myshape;
    
    return 0;
}


