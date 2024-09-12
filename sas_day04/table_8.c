// Challenge 8 : Copie d'un Tableau
// Écrivez un programme C qui copie les éléments d'un tableau d'entiers dans un autre tableau. 
// Affichez les éléments du tableau original et du tableau copié pour vérifier que la copie est correcte.

#include <stdio.h>

int main(){
    int tab1[5] = {1, 2, 3, 4, 5}; //this table is initializid without dimension
    int tab2[5] ;
    int table_dim = sizeof(tab1)/sizeof(tab1[0]);
    //int table_dim2 = sizeof(tab2)/sizeof(tab2[0]);

    printf("table 1 : ") ;
    for (int i = 0 ; i <table_dim ;i++){
         printf("%d\t", tab1[i]);
            
    }
    
    // for (int i = 0 ; i <table_dim ;i++){
    //     for (int j = i ; j < table_dim ; j++){
    //         tab2[j] = tab1[i] ; 
    //         printf("%d\n", tab2[j]); 
    //     }  
    // }
    printf("\n") ;
    printf("table 2 : ") ;
     for (int i = 0 ; i <table_dim ;i++){
            tab2[i] = tab1[i] ; 
            printf("%d\t", tab2[i]); 
        
    }
}
