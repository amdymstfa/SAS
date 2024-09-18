// Challenge 4 : Structure avec Pointeurs
// Écrivez un programme C qui définit une structure pour représenter un point dans un plan avec les champs x et y.
//  Utilisez des pointeurs pour créer une variable de cette structure et modifiez ses valeurs. 
//  Affichez les valeurs du point.
#include <stdio.h>
#include <stdlib.h>

struct Point
{
    float x ;
    float y ;
};

int main(){
    //declre variable of with pointers
    struct Point *point ;
    //initialization 
    point = malloc(sizeof(struct Point));
    // allocation error
    if (!point){
        fprintf(stderr, "allocation error");
        return 1 ;
    }
    printf("please enter the value of x : ");
    scanf("%f", &point->x) ;
    printf("please enter the value of y : ");
    scanf("%f", &point->y);

    printf("(%.2f, %.2f)\n", point->x, point->y);

    //liberation of memory 
    free(point);
}
