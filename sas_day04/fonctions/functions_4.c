// Challenge 4 : Fonction de Minimum
// Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus petit des deux. 
// Créez un programme principal qui utilise cette fonction pour afficher le minimum entre deux nombres.

#include <stdio.h>


int max(int a, int b ){
    if (a <= b)
        return a ;
    return b ;
}


int main(){
    int x, y ;
    printf("please enter the value of x :\n");
    scanf("%d",&x) ;
    printf("please enter the value of y :\n");
    scanf("%d",&y) ;
    int result = max(x,y) ;
    printf("%d is smaller", result) ;
}