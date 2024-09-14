// Challenge 15 : Calcul de la Factorielle
// Écrivez un programme C qui calcule la factorielle d'un nombre entier n (n!) en utilisant une boucle for.
// La factorielle de n est le produit de tous les entiers positifs inférieurs ou égaux à n.

#include <stdio.h>

int main()
{
    int n, fact = 1;

    printf("Please enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else if (n == 0)
    {
        printf("Factorial of 0 = 1\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i; // fact = fact * i
        }

        printf("Factorial of %d = %d\n", n, fact);
    }

    return 0;
}
