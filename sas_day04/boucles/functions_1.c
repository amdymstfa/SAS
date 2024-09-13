// Challenge 1 : Fonction de Somme
// Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur somme. 
// Créez un programme principal qui utilise cette fonction pour afficher la somme de deux nombres.


#include <stdio.h>


int sum(int a, int b ){
        return a+b ;
}


int main(){
    int x, y ;
    printf("please enter the value of x :\n");
    scanf("%d",&x) ;
    printf("please enter the value of y :\n");
    scanf("%d",&y) ;
    int result = sum(x,y) ;
    printf("la somme est : %d", result) ;
}