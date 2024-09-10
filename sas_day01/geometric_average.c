// Challenge 8 : Calcul de la moyenne géométrique
// Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur. Formule :

// Moyenne géométrique = (a * b * c)^(1/3)

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c ;

    printf("please enter the value of a : \n");
    scanf("%f", &a);
    printf("please enter the value of b : \n");
    scanf("%f", &b);
    printf("please enter the value of c : \n");
    scanf("%f", &c);

    float geo_av = pow((a * b * c), (1/3)) ; // power operation in math.h
    printf("geometric average : %.2f\n", geo_av);
}