// Challenge 3 : Somme de Deux Valeurs
// Écrivez un programme C pour calculer la somme de deux valeurs entières données. Si les
// deux valeurs sont identiques, le programme doit renvoyer le triple de leur somme.


#include <stdio.h>

int main(){
    int a,b ;
    printf("please enter the value of a :\n");
    scanf("%d", &a) ;

    printf("please enter the value of b:\n");
    scanf("%d", &b) ;

    if (a == b){
        int r  = (a+b)*3;
        printf("result (a == b) : %d", r) ;
    } else {
        int r  = (a+b);
        printf("result : %d", r) ;
    }
    
}