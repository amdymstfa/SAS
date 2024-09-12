// Challenge 2 : Factorielle d'un Nombre
// Écrivez un programme C qui calcule la factorielle d'un nombre entier positif n entré par l’utilisateur. 
// La factorielle de n est le produit de tous les entiers positifs inférieurs ou égaux à n. 
// Par exemple, pour n = 5, affichez : 5! = 120.
#include <stdio.h>

int main(){
    int n; 
    printf("please enter a number : \n") ;
    scanf("%d", &n) ;
    if (n<0){
        printf("please enter a valid number\n");
    }else {
        for (int i = n ; i > n ; i-- )
        {
            n *= i ;
            printf("%d", n) ;
        }   
    }
}