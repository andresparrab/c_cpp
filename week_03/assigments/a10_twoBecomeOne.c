#include <stdio.h>
/* Complete the function so that it combines nr1 and nr2 into 
a unsigned char and return it. Do NOT use printf or scanf */

unsigned char twoBecomeOne(int nr1, int nr2)
{
    unsigned char twoNumbers = 0;
    if (nr1 > 15)
    {
        nr1 = 15;
    }
    if (nr2 > 15)
    {
        nr2 = 15;
    }
    if (nr1 < 0)
    {
        nr1 = 0;
    }
    if (nr2 < 0)
    {
        nr2 = 0;
    }
    twoNumbers = nr1 | (nr2 << 4);
    return twoNumbers;
}

// Answer from the course
// unsigned char twoBecomeOne(int nr1, int nr2){
//     unsigned char twoNumbers = 0;

//     //Make sure numbers are inside the interval
//     if (nr1 > 15)
//     nr1 = 15;
//     if (nr1 < 0)
//     nr1 = 0;
//     if (nr2 > 15)
//     nr2 = 15;
//     if (nr2 < 0)
//     nr2 = 0;

//     twoNumbers = twoNumbers | nr1;
//     twoNumbers = twoNumbers | nr2 << 4;

//     return twoNumbers;
// }
int main()
{
    // unsigned char twoNumbers = 25;

    printf("this are the two numbers togeter: %d\n", twoBecomeOne(16, 8));
    return 0;
}

// 10
// ||
// 10
// ---
// 10

//000101111