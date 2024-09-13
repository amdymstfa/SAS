// Challenge 5 : Fonction de Factorielle
// Écrivez une fonction en C qui calcule la factorielle d'un entier positif.
// La fonction doit prendre un entier en paramètre et retourner sa factorielle.
// Créez un programme principal qui utilise cette fonction pour afficher la factorielle d'un nombre donné.

#include <stdio.h>

int factoriel(int n)
{
    if (n == 0)
        return 1 ;
    return n * factoriel(n - 1);
}

int main()
{
    int n;
    printf("please enter a positif number!\n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("you have to enter a valid value !\n");
    }
    else
    {
        printf("%d! = %d\n", n, factoriel(n) );
    }
}