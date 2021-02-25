#include <stdio.h>

int main()
{
    // here we have a 3d array where the 3d can we see ass sheets of papers
    //so the sheet will make for 3d in the array
    int number[2][2][2] = {{{1, 2},
                            {3, 4}},
                           {{5, 6},
                            {7, 8}}};
    // OBS divide number/4 because every number has saze of 4 bite in memory
    for (int sheet = 0; sheet < 2; sheet++)
    {
        for (int columm = 0; columm < 2; columm++)
        {
            for (int rows = 0; rows < 2; rows++)
            {
                printf("SHEET %d , COLUMN: %d ROW: %d has value: %d\n", sheet, columm, rows, number[sheet][columm][rows]);
            }
        }
    }
    return 0;
}