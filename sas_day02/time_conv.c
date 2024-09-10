// Challenge 5 : Conversion d'Année
// Écrivez un programme C piloté par menu pour convertir une année donnée en :
// - Mois
// - Jours
// - Heures
// - Minutes
// - Secondes

#include <stdio.h>

int main(){
    int Y ;
    printf("please enter the year : \n") ; 
    scanf("%d", &Y) ;
    float months = Y * 12 ;
    float days = Y * 365 ;
    float hours = Y * 8760 ;
    float minutes = Y * 525600 ;
    float secondes = Y * 31536000 ;
    printf("your enter %d : \n months : %f : \n days : %f : \n hours : %f : \n minutes : %f : \n secondes : %f : \n", Y, months, days, hours, minutes, secondes) ;

    
}