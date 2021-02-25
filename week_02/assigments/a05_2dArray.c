#include <stdio.h>

int main()
{
    int myArray[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            myArray[i][j] = (i + 1) * (j + 1);
            printf("Column: %d , ROW: %d \n", i, myArray[i][j]);
        }
    }

    return 0;
}