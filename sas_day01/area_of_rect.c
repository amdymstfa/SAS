// Challenge 11 : Surface d'un rectangle
// Écrivez un programme pour trouver la surface d'un rectangle. Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur. Formule pour la surface d'un rectangle :

// Surface = longueur * largeur

#include <stdio.h>

int main()
{
    float L, l;

    printf("please enter the length L : \n");
    scanf("%f", &L);
    printf("please enter the width l : \n");
    scanf("%f", &l);

    float area = L * l;
    printf("the area of rectangle is : %.2f\n", area);
}