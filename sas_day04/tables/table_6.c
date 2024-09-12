// Challenge 6 : Multiplication des Éléments
// Écrivez un programme C qui multiplie chaque élément d'un tableau d'entiers par un facteur donné et affiche le tableau résultant. 
// Le programme doit demander le nombre d'éléments, les éléments du tableau, et le facteur de multiplication.



#include <stdio.h>

int main(){
     int size_of_table ;
     int prod = 0 , facteur ;
    printf("please enter a size of array\n") ;
    scanf("%d", &size_of_table) ;
    printf("the size is %d . \n", size_of_table) ;
    int table[size_of_table] ; //this table is initializid without dimension
    int table_dim = sizeof(table)/sizeof(table[0]);

    printf("please the facteur of multiplication\n") ;
    scanf("%d", &facteur) ;
    for (int i = 0 ; i <table_dim ;i++){
        printf("please enter an element of array %d\n", i+1);
        scanf("%d", &table[i]);
        prod = table[i]*facteur;
        printf(" %d x %d = %d ",table[i], facteur, prod) ;
    }

    
}