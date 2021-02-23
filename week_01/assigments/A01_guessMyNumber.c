#include <stdio.h>

/* The function below is already defined and ready for use
int bigOrSmall(int number){}

It will return -1 or 0 or 1
*/
int bigOrSmall(int number)
{
    int result;
    int correct = 75;
    if (number == correct)
    {
        result = 0;
    }
    if (number < correct)
    {
        result = -1;
    }
    if (number > correct)
    {
        result = 1;
    }
    return result;
}

int main()
{

    int myNumber;
    myNumber = 100;
    int answer;
    answer = bigOrSmall(myNumber);
    printf("the answer is: %d\n", answer);

    while (answer != 0)
    {

        if (answer < 0)
        {

            answer = bigOrSmall(myNumber++);
        }
        else if (answer > 0)
        {

            answer = bigOrSmall(myNumber--);
        }
    }

    printf("Your number is: %d", myNumber + 1);

    // BETTER SOLUTION
    //     for (int i = 0; i<= 100; i++){
    //     if (bigOrSmall(i) == 0){
    //         printf("Your number is: %d",i);
    //     }
    // }

    return 0;
}