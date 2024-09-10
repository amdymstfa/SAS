// Challenge 4 : Equation du Deuxième Degré
// Écrivez un programme C qui permet de calculer les solutions possibles d’une équation du
// deuxième degré

#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c ;
    
    printf("please enter the value of a\n") ;
    scanf("%d", &a) ; 

    printf("please enter the value of b\n") ;
    scanf("%d", &b) ; 

    printf("please enter the value of c\n") ;
    scanf("%d", &c) ; 
    float D = (b*b - 4*a*c) ;
    printf("delta = %.2f\n", D) ;

    if (D == 0) {
        printf("there is solution : -b/2a\n");
    } else if (D > 0){
        printf("there are two solutions : (-b±√D)/2a\n");
    } else {
        printf("solutions does not exist on IR only on C, immaginairy") ;
    }


   

    
}