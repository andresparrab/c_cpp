#include <stdio.h>

int main()
{
    //int age = 39;
    //float lenght = 1.5676;
    //char mongo = 'm';
    // printf("Hello my name is Andres and i am %d years old\n and this float is %f(2), my string %c\n", age, lenght, mongo);

    // Scanf function
    // Set up the variables that scanf wil fill
    char firstInitial;
    char lastInitial;
    int age;
    int favorite_number;
    printf("please enter your name:\n");
    scanf(" %c", &firstInitial);

    printf("please enter your last name: \n");
    scanf(" %c", &lastInitial);

    printf("\nplease enter your age: ");
    scanf(" %d", &age);

    printf("please enter your favorite number: ");
    scanf(" %d", &favorite_number);

    printf("you name is %c,%c and you are %d. Your favorite number is : %d", firstInitial, lastInitial, age, favorite_number);

    return 0;
}