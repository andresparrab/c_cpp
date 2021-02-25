#include <stdio.h>

//void myFunc(int nr[]) this is the same as thw below, a functions
//takes a pointer to the variable
// IMPORTANT: when you send a pointer referense to ex. array
//the the original array can be changed.
// if you only send nr[], then it will copy the number[]array to nr variable
void myFunc(int *nr)
{
    int counter;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", nr[i]);
    }
}

int main()
{

    int number[10];
    for (int i = 0; i < 10; i++)
    {
        number[i] = i * 2;
    }

    myFunc(number);
    return 0;
}