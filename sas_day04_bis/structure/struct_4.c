// Challenge 4 : Structure avec Pointeurs
// Écrivez un programme C qui définit une structure pour représenter un point dans un plan avec les champs x et y.
//  Utilisez des pointeurs pour créer une variable de cette structure et modifiez ses valeurs. 
//  Affichez les valeurs du point.
#include <stdio.h>
#include <stdlib.h>

struct Point
{
   float *x ;
   float *y ;
};

//inialize ponit
void initialize(struct Point *p, float x_val,float y_val ){
    p -> x = malloc(sizeof(float));
    p -> y = malloc(sizeof(float));

    if (p -> x == NULL || p -> y == NULL){
        printf("allocation erreor\n");
        exit(1);
    }
    *(p -> x) = x_val ;
    *(p -> y) = y_val ;
}

void free(struct Point *p){
    free(p -> x);
    free(p -> y );
}


int main(){
    
}
