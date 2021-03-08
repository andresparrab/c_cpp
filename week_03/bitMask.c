#include <stdio.h>

int main()
{
    int original = 6; // 0B00000100
    int orignalAsBinary = 0B00000100;
    printf("Original: %d As Binary: %d\n", original, orignalAsBinary);
    original = 4; // 0B00000100
    int mask = 2; // 0B00000010

    // we look at this as bites [0 0 0 0 0 1 0 0]
    // Condition                [| | | | | | | |]
    // we look at this as bites [0 0 0 0 0 0 1 0]
    //-------------------------------------------
    //                                     1 1 0  = 4+2+0=6
    printf("maskin the original with mask like this original | mask =  %d\n", original | mask);
    original = 6;  //0B00000110
    mask = 1 << 5; // 0B00100000
    printf("shifting:  %d\n", original | mask);
    int originalWithMask = original | mask; // 38
    printf("Masked: %d\n", originalWithMask);
    int unmask = original & ~mask; // 38
    printf("Unmask to original: %d", unmask);
    return 0;
}
