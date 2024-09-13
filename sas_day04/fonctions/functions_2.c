// Challenge 2 : Fonction de Multiplication
// Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur produit. 
// Créez un programme principal qui utilise cette fonction pour afficher le produit de deux nombres.
#include <stdio.h>


int prod(int a, int b ){
        return a*b ;
}


int main(){
    int x, y ;
    printf("please enter the value of x :\n");
    scanf("%d",&x) ;
    printf("please enter the value of y :\n");
    scanf("%d",&y) ;
    int result = prod(x,y) ;
    printf("the product is : %d", result) ;
}