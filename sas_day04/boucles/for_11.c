// Challenge 11 : Moyenne des Nombres
// Écrivez un programme C qui lit une série de nombres positifs terminée par un zéro et
// calcule la moyenne de ces nombres. N’affichez pas le zéro dans le calcul de la moyenne.

#include <stdio.h>

int main()
{
    int n;
    int keypress;
    int sum = 0;
    int average;
    printf("please enter the number of value !\n");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("please enter a valid number !\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            printf("enter the value %d\n", i);
            scanf("%d", &keypress);

            if (keypress % 10 == 0)
            {
                sum += keypress;
            }
            else
            {
                printf("the value must be ended by zero !\n");
                return 1 ;
            }
        }
        average = sum / n;
        printf("the sum is %d and the average is %d \n", sum, average / 10);
    }
}
