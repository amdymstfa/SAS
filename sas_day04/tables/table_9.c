// Challenge 9 : Inversion d'un Tableau
// Écrivez un programme C qui inverse les éléments d'un tableau d'entiers. Par exemple, si le tableau est [1, 2, 3, 4, 5], 
// il doit devenir [5, 4, 3, 2, 1].
//  Affichez le tableau inversé.

#include <stdio.h>

int main(){
    
    int tab1[5] = {1, 2, 3, 4, 5}; //this table is initializid without dimension
   
    int table_dim = sizeof(tab1)/sizeof(tab1[0]);
    //printf("%d\n", tab1[table_dim]);
    for (int i = 1 ; i <= table_dim ;i++){
         printf("%d\t", tab1[table_dim-i]);
            
    }
    
    
    
}