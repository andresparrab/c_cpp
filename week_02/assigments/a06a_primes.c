#include <stdio.h>

//CORRECT ANSWER
// void isPrime(int nr){
// int flag = 0;
// for (int i = 2; i <= nr / 2; ++i) {

//         // condition for non-prime
//         if (nr % i == 0) {
//             flag = 1;
//             break;
//         }
//     }

//         if (flag == 0)
//             printf("TRUE");
//         else
//             printf("FALSE");
//     }

// MY ANSWER
void isPrime(int nr)
{
    int prime;
    for (int i = 2; i < nr; i++)
    {
        if (nr > 2 && ((nr % i) == 0))
        {
            prime = 0;
            break;
        }
        else
        {
            prime = 1;
        }
    }
    if (prime == 0)
    {
        printf("FALSE\n");
    }
    else
    {
        printf("TRUE\n");
    }
}

int main()
{
    //isPrime(2);
    isPrime(3);
    isPrime(5);
    isPrime(8);
    // isPrime(11);
    // isPrime(13);
    // isPrime(14);
    // isPrime(15);
    isPrime(16);
    isPrime(17);
    // isPrime(18);
    // isPrime(19);
    // isPrime(20);
    // isPrime(21);
    // isPrime(113);
    isPrime(1001);
    return 0;
}