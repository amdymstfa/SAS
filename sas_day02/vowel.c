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
    case 'u':
    case 'Y':
    case 'A':
    case 'O':
    case 'I':
    case 'E':
    case 'U':
            printf("good \n");
        break;

    
    default:
        printf("erreur") ;
        break;
    }   
}