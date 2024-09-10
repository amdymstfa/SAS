// Challenge 1 : Paire ou Impaire
// Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair
#include <stdio.h>

int main(){
    int n ;
    printf("please enter an integer :\n") ;
    scanf("%d", &n);
    if (n%2 == 0) {
        printf("%d : even number", n); 
    }else {
        printf("%d : odd number", n);

    }
}