#include <stdio.h>

// A struct can have variables of different types all var are publics,
// but CANNOT have functions,  but you ca n define a *pointer that points to a function :)

// 3. we can defyne a new type so we dont need to type struc point all the time

// Define struct old style
// struct point
// {
//      int x;
//     int y;
// };

typedef struct
{
    int x;
    int y;
} point;

// Create a function for draw he points
// and we send the struct point that alreade have the x and y variables
void draw(point p)
{
    printf("x: %d y: %d", p.x, p.y);
    printf("\n The point struc takes %ld bytes of memory", sizeof(point));
}

int main()
{
    // 1. in this case we have to write the word struct to tell that the point is a sctruct
    // 2. struct point p; // Instatiated a struct of type point with name p
    //new way
    point p; //  // Instatiated a struct of type point with name p
    p.x = 10;
    p.y = 5;
    draw(p);
    return 0;
}