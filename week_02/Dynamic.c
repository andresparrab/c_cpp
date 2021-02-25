#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int n = 5;
    // // here we make a pointer and allocate memmory with the size
    // // n* sizeof(int)
    // int *p = malloc(n * sizeof(int));
    // // Allocating memmory with double the size of n
    // p = realloc(p, 2 * n * sizeof(int));
    // // We have to free the memmory of the pointer
    // free(p);

    // Practical example
    int nr = 1;

    int *diceStore = malloc(sizeof(int));
    int numberDice = 0;

    while (nr != 0)
    {
        printf("Input dice (enter 0 to stop): \n");
        scanf("%d", &nr);
        printf("\n");
        diceStore[numberDice] = nr;
        numberDice++;
        // here we reallocarte the pointer numberDice
        // becasue numberDice start at index 0 we plus 1 to get how many times
        // the sizeof int
        diceStore = realloc(diceStore, (numberDice + 1) * sizeof(int));
    }

    for (int i = 0; i < numberDice; i++)
    {
        printf("%d\n", diceStore[i]);
    }

    return 0;
}