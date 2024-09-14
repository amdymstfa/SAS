// Challenge 9 : Calcul de la Puissance
// Écrivez un programme C qui calcule la puissance d'un nombre en utilisant une boucle while.
//  Le programme doit demander la base (positive) et l'exposant (non négatif) et
//  afficher la valeur résultante.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, run = 1;
    printf("please  enter a value!\n");
    scanf("%d", &a);
    printf("please  enter the value of your power!\n");
    scanf("%d", &b);
    // if (a <= 0 || b < 0 ){
    //     printf("please enter valid datas !\n") ;
    // }
    while (a > 0 && b >= 0)
    {
        int p = pow(a, b);
        if (b == 0)
        {
            printf("pow(%d) = 1 \n", a);
            break;
        }
        else
        {
            printf("pow(%d) = %d \n", a, p);
            break;
        }
    }
}