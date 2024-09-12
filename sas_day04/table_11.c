// Challenge 11 : Remplacer un Élément
// Écrivez un programme C qui remplace toutes les occurrences d'une valeur spécifique dans un tableau d'entiers par une nouvelle valeur.
//  Le programme doit demander à l'utilisateur le nombre d'éléments, les éléments du tableau, la valeur à remplacer, et la nouvelle valeur.

#include <stdio.h>

int main(){
    int size_of_table , find_value = 0;
    printf("please enter the size of your table : \n");
    scanf("%d", &size_of_table) ;
    if (size_of_table <= 0){
        printf("please enter a valid value, the size of table migth to be positif.\n");
    }else {
        int table[size_of_table] ;
        for (int i = 0 ; i < size_of_table; i++){
            printf("please enter the element  %d : ", i+1) ;
            scanf("%d", &table[i]);
        }
        printf("former table  : ") ;
        for (int i = 0 ; i < size_of_table; i++){
            printf("%d\t", table[i]) ;
        }
        for (int i = 0 ; i < size_of_table; i++){
            table[i] = 1 ;
        }
        printf("new table:") ;
        for (int i = 0 ; i < size_of_table; i++){
            printf(" %d\t", table[i]) ;
        }
    }
    
}