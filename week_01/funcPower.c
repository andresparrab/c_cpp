#include <stdio.h>
#include <math.h>
double power_off(double base, double exponent)
{

    return pow(base, exponent);
}

int main()
{

    printf("The result is: %f", power_off(2, -2));
    return 0;
}
