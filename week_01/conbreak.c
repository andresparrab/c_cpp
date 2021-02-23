#include <stdio.h>

int main()
{
    int a, sum = 0;
    for (a = 0; a < 10; a++)
    {
        if (a % 2 == 0)
        {
            continue;
        }
        sum += a;
    }
    printf("Sum = %d", sum);
    return 0;
}
