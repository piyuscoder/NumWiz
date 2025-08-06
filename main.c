#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, min = 1, max = 100, count = 5;
    srand(time(0));
    int randomNumber = min + rand() % (max - min + 1);


    printf("\n\t\t\t\t\t**Welcom to NumWiz game**\n\n");
    printf("<----------------you have only 5 chance to guess the correct number-------------->\n\n");
    printf("Enter number between 1 to 100\n");

    while (count)
    {
        printf("Enter a number : ");
        scanf("%d", &n);
        if (randomNumber == n)
        {
            printf("\nCongratulations you won 7 CRORE \n\n");
            return 0;
        }
        else if (randomNumber > n)
        {
            printf("Please enter greater number \n");
        }
        else
        {
            printf("Please enter smaller number \n");
        }
        count--;
    }
    printf("\nYou lost the game. Try again...");
    return 0;

}
