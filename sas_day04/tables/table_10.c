// Challenge 10 : Rechercher un Élément
// Écrivez un programme C qui recherche un élément spécifique dans un tableau d'entiers en utilisant une recherche linéaire. 
// Le programme doit demander à l'utilisateur le nombre d'éléments, les éléments du tableau, et l'élément à rechercher, puis afficher
//  si l'élément est présent ou non.

#include<stdio.h>

int main(){
    int size_of_table , find_value = 0;
    printf("please enter the size of your table : \n");
    scanf("%d", &size_of_table) ;
    if (size_of_table <= 0){
        printf("please enter a valid value, the size of table migth to be positif.\n");
    }else {
        printf("please enter a value :\t" ) ;
        scanf("%d", &find_value);
        printf("\n") ;

        int table[size_of_table] ;
        for (int i = 0 ; i < size_of_table; i++){
            printf("please enter the element  %d : ", i+1) ;
            scanf("%d", &table[i]);
        }

        int found = 0 ;
        for (int i = 0 ; i < size_of_table; i++){
            if (find_value == table[i]){
                found = 1 ;
                break;
            }
        }
        if (found){
            printf("the value is an element of the table.\n");
        }else{
                printf("the value is not an element of the table.\n");
            }
    }
    
}