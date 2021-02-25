#include <stdio.h>
float celsiusToFahrenheit(float input)
{
    float far;

    far = (((9.0 / 5.0) * input) + 32);
    return far;
}

float fahrenheitToCelsius(float fahrenheit)
{
    float cel;

    cel = (5.0 / 9.0) * (fahrenheit - 32);
    return cel;
}
int main()
{
    double div = 19 / 5;
    printf("divition %f\n", div);
    printf("Temperaturre in F: 18 and in Cel is: %0.2f\n", celsiusToFahrenheit(100));
    printf("Temperaturre in F: 18 and in Cel is: %0.2f", fahrenheitToCelsius(160));
    return 0;
}