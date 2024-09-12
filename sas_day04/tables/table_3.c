// Challenge 3 : Somme des Éléments
// Écrivez un programme C qui calcule et affiche la somme des éléments d'un tableau d'entiers. 
// Le programme doit demander le nombre d'éléments, puis les éléments du tableau, et afficher la somme totale.


#include <stdio.h>

int main(){
     int size_of_table ;
     int sum = 0 ;
    printf("please enter a size of array\n") ;
    scanf("%d", &size_of_table) ;
    printf("the size is %d . \n", size_of_table) ;
    int table[size_of_table] ; //this table is initializid without dimension
    int table_dim = sizeof(table)/sizeof(table[0]);

    for (int i = 0 ; i <table_dim ;i++){
        printf("please enter an element of array %d\n", i+1);
        scanf("%d", &table[i]);
        sum += table[i];
    }

    printf("the sum is %d : ", sum) ;
}