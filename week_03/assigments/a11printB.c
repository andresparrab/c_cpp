#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Use printf for your prints.

void printB2(unsigned int toBinary)
{
    //toBinary = 20;
    //unsigned char mongo;
    //printf("size of char: %d\n", sizeof(mongo)); // size =1 byte = 8 bits section max =256 = 11111111
    unsigned char tobinaryCast = (unsigned char)toBinary;
    unsigned char *b = &tobinaryCast;

    // printf("this is the b: %d\n", b);                    // this hold the original adress (10 digits) = 1522040796
    // printf("this is the tobinary: %d\n", &toBinary);     // this holds the adress of &tobinary (10 digts) = 1522040796
    unsigned int byte;
    int i, j;

    for (i = 0; i >= 0; i--) // this rrepresents the iterations of 4 bytes
    {
        for (j = 7; j >= 0; j--) // this represent the iteration of 1 byte = 8 bits (0-7)
        {
            byte = (b[i] >> j) & 1; // bit compare the  decimal value in b[i] to the value of one, if true return the int value 1
            printf("%u", byte);
        }
    }
    puts("");
}

void printB(unsigned int toBinary)
{
    unsigned int *b = &toBinary;
    unsigned int byte;
    int j;
    for (j = 31; j >= 0; j--) // this represent the iteration of 32 bits
    {
        //byte = (b[0] >> j) & 1; // bit compare the  decimal value in b[0] to the value of one, if true return the int value 1
        printf("%u|", b[3]);
    }

    puts("");
}

int main()
{
    printB(1);          //00000000000000000000000000000010
    printB(2);          //00000000000000000000000000000010
    printB(16);         //0000000000000000000000000010000
    printB(32);         //00000000000000000000000000100000
    printB(44);         //00000000000000000000000000101100
    printB(128);        //00000000000000000000000010000000
    printB(4294967295); //11111111111111111111111111111111

    return 0;
}

// void printB(unsigned int toBinary)
// {
//     char binary[]="00000000000000000000000000000000";
//     //binary[33] = '\0';
//     for (int i = 0; i < 32; i++)
//     {
//         if (toBinary & 1 << i)
//         {
//             binary[31 - i] = '1';
//         }
//         else
//         {
//             binary[31 - i] = '0';
//         }
//     }

//     printf("%s", binary);
// }
