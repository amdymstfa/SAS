// Challenge 9 : Vérification d'Alphabet
// Écrivez un programme C qui lit un caractère et détermine s'il fait partie des alphabets ou
// non. Et s'il l'est, dire en plus s’il est une minuscule ou une majuscule
#include <stdio.h>

int main(){
    char lolo ;
    printf("please enter a letter\n");
    scanf("%c", &lolo) ;

    if (lolo >= 65 && lolo <= 90) {
        printf(" %c is a uppercase letter :\n", lolo);
    } else if (lolo >= 97 && lolo <= 122) {
        printf(" %c is a lowercase letter :\n", lolo);
    }
    else {
        printf(" %c is not a letter : \n", lolo);
    }
}