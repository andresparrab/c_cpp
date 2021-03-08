#include <stdio.h>

int main()
{
    // we look at this as bites [0 0 0 0 0 1 0 1]
    // Condition                [& & & & & & & &]
    // we look at this as bites [0 0 0 0 0 0 1 1]
    //-------------------------------------------
    //                                     0 0 1 = 0+0+1= 1
    printf("Bitwise AND: %d\n", 5 & 3);

    // we look at this as bites [0 0 0 0 0 1 0 1]
    // Condition                [| | | | | | | |]
    // we look at this as bites [0 0 0 0 0 0 1 1]
    //-------------------------------------------
    //                                     1 1 1  = 4+2+1=7
    printf("Bitwise OR: %d\n", 5 | 3);

    char nr = 3;
    // we look at this as bites [0 0 0 0 0 0 1 1]
    // Condition                [~ ~ ~ ~ ~ ~ ~ ~]
    // we look at this as bites [1 1 1 1 1 1 0 0] =
    //-------------------------------------------
    //
    printf("Bitwise NOT: %d\n", ~nr);

    // we look at this as bites [0 0 0 0 0 1 0 1]
    // Condition                [^ ^ ^ ^ ^ ^ ^ ^]
    // we look at this as bites [0 0 0 0 0 0 1 1]
    //-------------------------------------------
    //                                     1 1 0 = 4+2= 6
    printf("Bitwise XOR: %d\n", 5 ^ 3);
    return 0;
}