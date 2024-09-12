// Challenge 2 : Saisie et Affichage des Éléments
// Écrivez un programme C qui demande à l'utilisateur le nombre d'éléments d'un tableau, puis demande à l'utilisateur de saisir ces éléments.
//  Affichez ensuite les éléments du tableau.


#include <stdio.h>

int main(){
    int size_of_table ;
    //int dimension_of_table ; 
    printf("please enter a size of array\n") ;
    scanf("%d", &size_of_table) ;
    printf("the size is %d . \n", size_of_table) ;
    int table[size_of_table] ; //this table is initializid without dimension
    int table_dim = sizeof(table)/sizeof(table[0]);

    for (int i = 0 ; i <table_dim ;i++){
        printf("please enter an element of array %d\n", i+1);
        scanf("%d", &table[i]);
    }

    for (int i = 0 ; i <table_dim ;i++){
        printf("element : %d\n", table[i]);
    }
    
}