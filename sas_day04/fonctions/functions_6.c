// Challenge 6 : Fonction de Fibonacci
// Écrivez une fonction en C qui calcule le n-ième terme de la suite de Fibonacci. 
// La fonction doit prendre un entier en paramètre et retourner le n-ième terme.
//  Créez un programme principal qui utilise cette fonction pour afficher le terme de Fibonacci demandé.

#include <stdio.h> 

int fibonacci(int n){
    return   (n-1) + (n-2) ; 
}

int main(){
    int n ;
    printf("please enter a number !\n") ;
        scanf("%d", &n) ;
        if (n<0)
        {
        printf("please enter a valide number!\n");
        }else if (n == 0 ){
            printf("F(%d) = %d\n", n, n) ;
            
        }else if (n == 1){
            printf("F(%d) = %d\n", n, n) ;
            
        }else {
            fibonacci(n) ;
            printf("F(%d) = %d\n", n, n) ;
        }
}