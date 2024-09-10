// Challenge 7 : Alphabet Majuscule
// Écrivez un programme pour vérifier si le caractère donné est un alphabet majuscule ou non
// en utilisant l'instruction conditionnelle if-else. Les lettres majuscules vont de 'A' à 'Z'. Les
// valeurs ASCII de 'A' et 'Z' sont respectivement 65 et 90. Si la valeur ASCII d'un caractère est
// comprise entre 65 et 90, il s'agit d'un alphabet majuscule.

#include <stdio.h>

int main(){
    char lolo ;
    printf("please enter a letter\n");
    scanf("%c", &lolo) ;

    if (lolo >= 65 && lolo <= 90) {
        printf(" %c is capital :\n", lolo);
    } else {
        printf(" %c is not capital : \n", lolo);
    }
}