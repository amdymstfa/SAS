// Challenge 6 : Facteurs d'un Nombre
// Écrivez un programme C qui affiche tous les facteurs d'un nombre entier positif n entré par l’utilisateur. 
// Par exemple, pour n = 36, affichez : 1, 2, 3, 4, 6, 9, 12, 18, 36.

#include <stdio.h>

int main(){
    int n ,is_facteur = 1 ;;
    printf("please enter a number !\n");
    scanf("%d", &n) ;
    if (n <= 0){
        printf("you have to enter a valid value.\n") ;
    }else{
        for (int i = 1 ; i <= n ; i++){
            if (n%i == 0){
                is_facteur = i ;
                printf("%d\t", is_facteur);
            }
        }
    }
}
