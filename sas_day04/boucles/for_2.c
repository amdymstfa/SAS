// Challenge 2 : pyramide d'étoile
//       *

//      ***

//     *****

//    *******

//   *********

//  ***********

// *************

// Écrire le programme pour avoir un pyramide d'étoile, le nombre des lignes à composer est demandé à l’utilisateur.
// (chaque ligne doit avoir un nombre premier d'étoiles.
#include <stdio.h>

int main(){
    int number , number_of_line , is_prime = 0 ;
    char count = '*' ;
    printf("please enter a number : \n");
    scanf("%d", &number);
    printf("please enter a number of line : \n");
    scanf("%d", &number_of_line);
    if (number<0){
        printf("please, you have to enter a positive number ! \n") ;
    }else if(number < number_of_line) {
        printf("the number of line migth to be up than the number that you give. \n");
    }else{
         
    }
}