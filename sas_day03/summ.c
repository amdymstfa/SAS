// Challenge 3 : Somme des N Nombres
// Écrivez un programme C qui demande un nombre entier n à l’utilisateur 
// et calcule la somme des n premiers nombres naturels.
//  Par exemple, pour n = 4, la somme est 1 + 2 + 3 + 4 = 10.

#include <stdio.h>

int main(){
    int n , sum = 0 ;
    printf("please enter a number : \n") ;
    scanf("%d", &n) ;
    if (n < 0){
        printf("please netr a valide  number : \n") ;
    }else { 
        for (int i = 1 ; i <= n ; i ++ ){
            sum += i ;
            
        }
        printf("%d", sum) ;
    }
}

