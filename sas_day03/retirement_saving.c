// Challenge 10 : Plan de Retraite avec Épargne
// Écrivez un programme C pour déterminer le plan de retraite en fonction de :

//  ge
// Années de cotisation
// Montant total épargné (en euros)

// Les plans sont :

//  ge >= 65 ans et Années de cotisation >= 30 ans et Montant >= 100 000 € : Plan complet avec pension élevée
//  ge >= 65 ans et Années de cotisation >= 20 ans et Montant >= 50 000 € : Plan partiel avec pension moyenne
//  ge < 65 ans : Plan épargne non encore disponible
// Ajoutez un bonus de 5% pour chaque tranche de 10 000 € au-delà de 50 000 € épargnés.


#include <stdio.h>

int main(){
    float age, years_of_contribution , total_amont_saved, bonus ;
    printf("please enter your age : \n") ;
    scanf("%f", &age) ;
    printf("please enter your years of contribution : \n") ;
    scanf("%f", &years_of_contribution) ;
    printf("please enter your total amont saved : \n") ;
    scanf("%f", &total_amont_saved) ;
    
    bonus = (total_amont_saved/10000)*(0.05) ;
    if (age >= 65 && years_of_contribution >= 30 && total_amont_saved >= 100000){
        printf("plan complet with high pension, your bonus is %.3f\n", bonus);
    }else if (age >= 65 && years_of_contribution >= 20 && total_amont_saved >= 50000){
        printf("partiel plan with average pension, your bonus is %.3f\n", bonus);
    } 
    while (age < 65 || years_of_contribution < 20 || total_amont_saved < 50000 ){
        printf("you are not avaible for a plan\n");
        break;
    }
}