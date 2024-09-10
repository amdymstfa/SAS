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
        float x0 = -b/2*a ;
        printf("there is solution : %.2f\n", x0);
    } else if (D > 0){
        float x1 = (-b-sqrt(D))/2*a, x2 = (-b+sqrt(D))/2*a ;
        printf("there are two solutions : %.2f and %.2f\n", x1,x2); 
    } else {
        printf("solutions does not exist on IR only on C, immaginairy") ;
    }


   

    
}