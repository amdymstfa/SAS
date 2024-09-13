// Challenge 8 : Recherche Dichotomique
// Écrivez un programme C qui implémente la recherche dichotomique dans un tableau trié d’entiers. 
// Le programme doit demander à l’utilisateur un nombre et rechercher ce nombre dans le tableau en utilisant la méthode de recherche dichotomique.

#include <stdio.h>

int main(){
    int table[] = {0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9} ;
    int n ; 
    //int count ;
    printf("please enter a value!\n") ;
    scanf("%d", &n) ;
    for (int i = 0 ; i < sizeof(table)/sizeof(table[0])  ; i++ )
    {
        if (table[i] == n ){
           int  count = n ;
            printf("%d is in the table.\n", count) ;
        }
          
    }


}