#include <stdio.h>

// A struct can have variables of different types all var are publics,
// but CANNOT have functions,  but you ca n define a *pointer that points to a function :)

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

// move takes is a pointer of type struct
void move(point *p)
{

    p->x++;
    p->y++;
}

int main()
{

    point p; //  // Instatiated a struct of type point with name p
    p.x = 10;
    p.y = 5;
    draw(p);
    // we send the mem adress of p
    move(&p);
    draw(p);
    return 0;
}

//Another way in the video:
// move takes is a pointer of type struct
// void move(point *p)
// {
//    (*p).x++;
//     (*p).y++;
// }

// int main()
// {

//     point p; //  // Instatiated a struct of type point with name p
//     p.x = 10;
//     p.y = 5;
//     draw(p);
//     point *pointer = &p;
//     // we send the mem adress of p
//     move(pointer);
//     draw(p);
//     return 0;
// }