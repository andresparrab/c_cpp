#include <stdio.h>

int main()
{
    int nr = 0;
    // & means that READ the scanf and add the value to the MEMORY adress that &nr refers to
    // we scan example 21
    scanf("%d", &nr);
    printf("value of var Number: %d\n", nr);
    printf("value  adress of var Number: %d\n", &nr);

    // the * is for create a pointer variable
    int *pointer = &nr;
    // I gues this printf the MEMORY as an INT adress of  pointer= that holds the Memory adress of nr
    printf("this is what the  &pointer point to: %d\n", &pointer);
    // %p I gues this print the MEMORY as HEX adress of  pointer= that hols the Memory adress of nr
    printf("this is what the  &pointer point to: %p\n", &pointer);
    // *pointer  points to the value of &nr (21) for example
    printf("this is what the *pointer point to: %d\n", *pointer);
    // pointer  points to the ADRESS of &nr for example
    printf("this is what the pointer point to: %d\n", pointer);
    return 0;
}