// Challenge 5 : Somme des N Nombres
// Écrivez un programme C qui demande à l’utilisateur un nombre entier n et calcule la somme des n premiers nombres naturels. 
// Par exemple, si n est 5, la somme est 1 + 2 + 3 + 4 + 5 = 15.

#include <stdio.h>

int main(){
    int n , sum = 0 ;
    printf("please enter a nummbers !\n");
    scanf("%d", &n) ;

    for (int i = 0 ; i <= n ; i++){
        sum += i ;
    }
    printf("%d", sum) ;

}