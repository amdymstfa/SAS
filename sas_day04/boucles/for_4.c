// Challenge 4 : Inversion d'un Entier
// Écrivez un programme C qui lit un entier à plusieurs chiffres et l'affiche en ordre inverse sans utiliser de tableaux. 
// Par exemple, si l'entrée est 12345, affichez 54321.

#include <stdio.h>

int main(){
    int n , m =1  ;
    printf("please enter a number !\n") ;
    scanf("%d", &n) ;

    while(n/10 > 0){
        for (int i = 0 ; i <= n ; i++ ){
            int d = (n/m)%10 ; 
            m *= 10 ;
            if (d >= 1) {
                printf("%d", d ); 
            }
            break;
             
        }
    }

}
