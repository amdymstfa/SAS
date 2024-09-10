// Challenge 6 : Positif, Négatif ou Nul
// Écrivez un programme pour vérifier si le nombre donné est positif, négatif ou nul. Si le
// nombre est inférieur à zéro, alors le nombre est négatif et si le nombre est supérieur à zéro,
// alors le nombre est positif. Si les deux conditions sont fausses, le nombre est égal à zéro.

#include <stdio.h>

int main(){
    float n ;
    printf("please enter a number \n");
    scanf("%f",&n) ;
    if (n > 0){
        printf("n : positif");
    }else if (n < 0){
        printf("n : negatif");
    }else {
        printf("n : null");
    }
}