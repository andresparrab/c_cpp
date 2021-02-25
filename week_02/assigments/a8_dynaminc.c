#include <stdio.h>
#include <stdlib.h>

void minput()
{
    int nr = 1;
    int numbers = 0;
    int *arrayNumbers = malloc(sizeof(int));
    int temp;

    while (nr != 0)
    {
        printf("Please enter a positive integer: ");
        printf("Enter 0 to exit.\n ");
        scanf("%d", &nr);
        printf("\n");
        arrayNumbers[numbers] = nr;
        numbers++;
        arrayNumbers = realloc(arrayNumbers, (numbers + 1) * sizeof(int));
    }

    for (int i = 0; i < numbers - 1; i++)
    {
        for (int j = 0; j < numbers - 2; j++)
        {
            if (arrayNumbers[j] > arrayNumbers[j + 1])
            {
                temp = arrayNumbers[j];
                arrayNumbers[j] = arrayNumbers[j + 1];
                arrayNumbers[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < numbers - 1; i++)
    {
        printf("%d\n", arrayNumbers[i]);
    }
}

int main()
{
    minput();
    return 0;
}

// CORRECTED ANSWER
// int cmpfunc (const void * a, const void * b) {
//    return ( *(int*)a - *(int*)b );
// }

// void minput()
// {
//     int nr = 1;

//     int *diceStore = malloc(sizeof(int));
//     int numberDice = 0;

//     while (nr != 0)
//     {
//         scanf("%d", &nr);
//         diceStore[numberDice] = nr;
//         numberDice++;
//         diceStore = realloc(diceStore, (numberDice + 1) * sizeof(int));
//     }

//     qsort(diceStore, numberDice, sizeof(int), cmpfunc);

//     for (int i = 1; i < numberDice; i++)
//     {
//         printf("%d\n", diceStore[i]);
//     }

// }