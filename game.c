#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess = 1, user;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("the number is %d", number);
    do
    {
        printf("guess the number\n");
        scanf("%d", &user);
        if (number < user)
        {
            printf("guesss is too high\n");
        }
        else if (number > user)
        {
            printf("guess is too low\n");
        }
        else
        {
            printf("you guessed the number\n");
        }
        guess++;
    } while (number != user);
    printf(" you guessed the number in %d attemps\n" ,guess);
    return 0;
}