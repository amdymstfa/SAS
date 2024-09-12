// Challenge 3 : Affichage des Nombres Premiers
// Écrivez un programme C qui lit un entier n et affiche tous les nombres premiers de 1 à n. 
//Un nombre est considéré premier s'il est divisible uniquement par 1 et lui-même.

#include <stdio.h>

int main(){
    int n , is_prime = 1 ;
    printf("please enter anumber! \n") ;
    scanf("%d", &n)  ;
    if (n <= 1){
        is_prime = 0 ;
    }else {
        for (int i = 2 ; i*i <= n ; i++){
            if (n%i == 0){
                is_prime = 0 ;
            }
            break;
        }
    }
    if (is_prime == 1){
        printf("%d is prime.\n", n) ;
    }else {
        printf("%d is not prime.\n", n) ;

    }
}