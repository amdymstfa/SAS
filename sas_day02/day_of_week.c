// Challenge 11 : Jour de la Semaine
// Écrivez un programme C qui affiche d'une manière aléatoire un des jours de la semaine.


#include <stdio.h> 
#include <stdlib.h> // get rand() and srand() fonctions
#include <time.h>   // take a time reference for diff number

int main(){
    srand(time(0)) ;
    int min = 1 , max = 7 , n = min + rand()%(max - min +1) ;
    printf("n = %d\n", n) ;
    switch (n)
    {
    case 1:
        printf("Monday\n") ;
        break;
    case 2:
        printf("Tuesday\n") ;
        break;
    case 3:
        printf("Wednesday\n") ;
        break;
    case 4:
        printf("Thursday\n") ;
        break;
    case 5:
        printf("Friday\n") ;
        break;
    case 6:
        printf("Saterday\n") ;
        break;
    case 7:
        printf("Sunday\n") ; 
        break;
    
    default:
        break;
    }
}