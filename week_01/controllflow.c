#include <stdio.h>

int main()
{
    int number = 5;
    if (number == 1)
    {
        printf("Number is 1\n");
    }
    else
    {
        printf("Number is not 1\n");
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", i);
    }
    int counter = 0;

    while (number == 5)
    {
        counter++;
        printf("%d .still number 5\n", counter);
        if (counter > 6)
        {
            number = 0;
        }
    }

    return 0;
}
