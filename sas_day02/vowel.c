// Challenge 2 : Voyelle ou Non
// Écrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle
// ou non en utilisant l'instruction switch case

#include <stdio.h>
int main(){
    char vowel ;

    printf("please enter a vowel \n") ;
    scanf("%c", &vowel) ;
    

    switch (vowel)
    {
    case 'y':
    case 'a':
    case 'o':
    case 'i':
    case 'e':
            printf("good \n");
        break;

    
    default:
        printf("erreur") ;
        break;
    }   
}