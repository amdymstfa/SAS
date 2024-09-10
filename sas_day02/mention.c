// Challenge 8 : Mention Obtenue
// Nous désirons afficher la mention obtenue par un élève en fonction de la moyenne de ses
// notes. S’il a une moyenne strictement inférieure à 10, il est recalé. S’il a une moyenne entre
// 10 (inclus) et 12, il obtient la mention passable. S’il a une moyenne entre 12 (inclus) et 14, il
// obtient la mention assez bien. S’il a une moyenne entre 14 (inclus) et 16, il obtient la
// mention bien. S’il a une moyenne supérieure à 16 (inclus) il obtient la mention très bien.
// Écrire les instructions nécessaires.

#include <stdio.h>

int main(){
    float average ;
    printf("please enter the average : \n");
    scanf("%f", &average) ;

    if (average < 10){
        printf("average : %,2f, sorry you miss the test", average) ;
    }else if (10<= average && average < 12){
        printf("average : %.2f, fair", average) ;
    }else if (12<= average && average < 14){
        printf("average : %.2f, pretty good", average) ;
    }else if (14<= average && average < 16){
        printf("average : %.2f, good", average) ;
    }
    else if (16 <= average ){ 
        printf("average : %.2f, very good", average) ;
    }else {
        printf("good bye");
    }
}