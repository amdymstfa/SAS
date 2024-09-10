// Challenge 7 : Moyenne pondérée de trois nombres
// Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations suivantes :

// 1er nombre : pondération 2
// 2ème nombre : pondération 3
// 3ème nombre : pondération 5


#include <stdio.h>

int main(){
    int w1 = 2, w2 = 3 , w3 = 5 ; // poderation coefficient
    int x, y, z ;
    int W = w1 + w2 + w3 ;

    printf("please enter the value of x :\n") ;
    scanf("%d", &x) ;
    printf("please enter the value of y :\n") ;
    scanf("%d", &y) ;
    printf("please enter the value of z : \n") ;
    scanf("%d", &z) ;

    float S = (x*w1 + y*w2 + z*w3)/W ;
    printf("Weighted average of three numbers is : %.3f\n", S) ;

}