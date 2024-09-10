// Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
// Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D. Formule :

// Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, z1, z2;

    printf("please enter the value of x1 : \n");
    scanf("%f", &x1);
    printf("please enter the value of x2 : \n");
    scanf("%f", &x2);

    printf("please enter the value of y1 : \n");
    scanf("%f", &y1);
    printf("please enter the value of y2 : \n");
    scanf("%f", &y2);

    printf("please enter the value of z1 : \n");
    scanf("%f", &z1);
    printf("please enter the value of z2 : \n");
    scanf("%f", &z2);

    float D = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1));
    printf("he distance between two points in 3D space is : %.3f\n", D);
}