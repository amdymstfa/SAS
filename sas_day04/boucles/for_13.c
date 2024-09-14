// Challenge 13 : Table de Multiplication avec Somme
// Écrivez un programme C qui demande un nombre à l’utilisateur et affiche
// ala table de multiplication de 1 à 10 pour ce nombre.
// En plus, affichez la somme des produits.

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int p = 0;
    printf("please enter the number of value !\n");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("please enter a valid number !\n");
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            p = n * i;
            printf("%d x %d = %d \n", n, i, p);
            sum += p;
        }
        printf("the sum of product is : %d\n", sum);
    }
}
