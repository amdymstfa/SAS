// Challenge 5 : Affichage Température
// Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). Règle :

// C < 0 : Solide
// 0 <= C < 100 : Liquide
// C >= 100 : Gaz


#include <stdio.h>

int main(){
    float C ; // temperature in cersus

    printf("please enter the value of the temperature\n") ;
    scanf("%f", &C) ;
    if (C < 0 ){
        printf("Solide \n") ;
    }
    else if (0 <= C & C < 100) {
        printf("Liquide\n") ;
    } else {
        printf("Gaz") ;
    }
}
