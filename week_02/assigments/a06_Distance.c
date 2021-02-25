#include <stdio.h>
#include <math.h>

void distance(float *p1, float *p2)
{

    float result;
    result = sqrt((pow((p2[0] - p1[0]), 2)) + (pow((p2[1] - p1[1]), 2)) + (pow((p2[2] - p1[2]), 2)));
    printf("%0.2f", result);
}

int main()
{
    float p1[3] = {1, 2, 3};
    float p2[3] = {4, 4, 4};
    distance(p1, p2);
    return 0;
}