#include <stdio.h>

int main()
{
    int decimal = 255;
    printf("decimal number is : %d\n", decimal);

    printf("size of decimal number is : %ld\n", sizeof(int));
    int binary = 0B11111111; // 255 in binary numbers
    printf("binary number for 255 is : %d\n", binary);
    int hex = 0xFF;
    printf("biggest decimal for 255 is : %d\n", hex);
    printf("biggest decimal for 255 is : %X\n", hex);
    return 0;
}