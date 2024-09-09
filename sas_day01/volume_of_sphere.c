// Challenge 10 : Volume d'une sphère
// Écrivez un programme pour trouver le volume d'une sphère. Prenez le rayon de la sphère en entrée de l'utilisateur.
// Formule pour le volume d'une sphère :

// Volume = (4/3) * π * r³

#include <stdio.h>
#include <math.h>

int main(){
    float r ;
    float π = 3.14 ;    

    printf("please enter sphere radius : \n") ;
    scanf("%f", &r) ;
    float v = (4/3) * π * pow(r,3) ;
    printf("sphere's radius : %.3f\n", v) ;
}
