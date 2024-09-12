// Challenge 4 : Trouver le Maximum
// Écrivez un programme C qui trouve et affiche le plus grand élément dans un tableau d'entiers. 
// Le programme doit demander le nombre d'éléments et les éléments du tableau.
#include <stdio.h>
#include <limits.h> //this library help you to choose the moore minimal value possible (INT_MIN)

int main(){
     int size_of_table ;
     int sum = 0 ;
    printf("please enter a size of array\n") ;
    scanf("%d", &size_of_table) ;
    printf("the size is %d . \n", size_of_table) ;
    int table[size_of_table] ; //this table is initializid without dimension
    int table_dim = sizeof(table)/sizeof(table[0]);

    int max_element = INT_MIN;
    for (int i = 0 ; i <table_dim ;i++){
        printf("please enter an element of array %d\n", i+1);
        scanf("%d", &table[i]);
        if (table[i]>=max_element){
            max_element = table[i] ;
            printf("the max element is : %d\n", max_element) ;
        }
        
    }
    for (int i = 0 ; i <table_dim ;i++){
        if (table[i]> max_element){
            max_element = table[i] ;
            
        }
        
    }
    printf("the max element is : %d\n", max_element) ;
    
    
    
}