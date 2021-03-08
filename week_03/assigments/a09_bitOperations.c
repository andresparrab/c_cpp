#include <stdio.h>
#include <math.h>
void makeMeOne(int nr, int theOne)
{
    int newnr;
    int mask;
    if (theOne < 1)
    {
        theOne = 1;
    }
    if (theOne > 32)
    {
        theOne = 32;
    }
    mask = 1 << (theOne - 1);
    newnr = nr | mask;
    printf("%d\n", newnr);
}

// CORRET ANSWER IN THE TEST
// void makeMeOne(int nr, int theOne){
//     if (theOne > 32)
//     theOne = 32;
//     if (theOne < 1)
//     theOne = 1;
//     nr |= 1<< (theOne-1);
//     printf("%d", nr);
// }

int main()
{
    makeMeOne(32, 4);
    makeMeOne(0, 8);
    makeMeOne(1, 1);
    makeMeOne(7, 4);
    makeMeOne(1, 32);

    return 0;
}
