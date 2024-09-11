// Challenge 4 : Affichage des N Premiers Nombres Impairs
// Écrivez un programme C qui demande un nombre entier n et affiche les n premiers nombres impairs 
// Par exemple, pour n = 5, afficher : 1, 3, 5, 7, 9

#include <stdio.h>

int main(){
    int n ; 
    printf("please enter a number :\n") ;
    scanf("%d", &n) ;

    for (int i = 0 ; i <= n ; i++){
        if (i%2 != 0) {
            printf("%d ", i) ;
        }
    }
}