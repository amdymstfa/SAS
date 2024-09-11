// Écrivez un programme C pour évaluer la performance d'un employé en fonction de :

// Score de performance (de 0 à 100)
// Ancienneté (en années)
// Récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus)

// Les évaluations sont :

// Score >= 90 et Ancienneté >= 5 ans : Excellente
// Score >= 75 et Ancienneté >= 3 ans : Bonne
// Score >= 50 et Ancienneté < 3 ans : Satisfaisante
// Score < 50 : Insuffisante
// Ajoutez un bonus si des récompenses ont été reçues : 10% pour une récompense, 20% pour deux ou plus.

#include <stdio.h>

int main(){
    int score , seniority , rewards ;
    printf("please enter your score :\n");
    scanf("%d", &score);
    printf("please enter your seniority :\n");
    scanf("%d", &seniority);
    printf("please enter your rewards :\n (0 for none, 1 for one, 2 for two or more) \n");
    scanf("%d", &rewards);


    if (score >= 90 && seniority >= 5 ){
        printf("Excellent\n");
    }else if (score >= 75 && seniority >= 3){
        printf("Good\n");
    }else if  (score >= 50 && seniority >= 3 ){
        printf("Satisfactory\n");
    } else if (score < 50){
        printf("Insuficient") ;
    }

    if (rewards == 0 ){
        printf("no bonus\n");
    }else if (rewards == 1){
        printf("bonus 10 percent \n");
    }else if  (rewards > 2){
        printf("bonus 20 percent\n");
    } 


    
}