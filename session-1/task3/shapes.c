
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    
    Point p = {3, 6};
    Rectangle r = makeRectangle(p, 5, 4);
    float r_area = area(r);
    printf("Area = %.2f\n", r_area);

    shiftRectangle(&r, p);
    printf("New point: %.1f, %.1f\n", r.p.x, r.p.y);

    scaleRectangle(&r, 3);
    printf("Scaled rectangle: width = %.1f, height = %.1f\n", r.width, r.height);

    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    
    Rectangle r = {p, width, height};
    
    return r;
}

float area( Rectangle r ) {
    
    float a = r.width * r.height;

    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {

    r->p.x += dp.x;
    r->p.y += dp.y; 

    return;
}

void scaleRectangle( Rectangle *r, float scale ) {
    r->height = r->height * scale; 
    r->width = r->width * scale; 
    return;
}
