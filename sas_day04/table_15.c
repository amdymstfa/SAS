#include <stdio.h>

int main(){
    int tab1[5] ; //this table is initializid without dimension
    int tab2[5] ;
    int table[10] ;
    int table_dim = sizeof(tab1)/sizeof(tab1[0]);
    

    printf("table 1 : ") ;
    for (int i = 0 ; i <table_dim ;i++){
        printf("please enter value %d of table 1:\n") ;
        scanf("%d\t", &tab1[i]);
        table[i] = tab1[i];
        
    }
    printf("\n") ;
    printf("table 2 : ") ;
     for (int i = 0 ; i <table_dim ;i++){
            printf("please enter value %d of table 2:\n") ;
        scanf("%d\t", &tab2[i]);
        table[i] = tab2[i];
    }
    printf("result of fusion : ") ;
     for (int i = 0 ; i <10 ;i++){
        printf(" %d\t", table[i]) ;
        
    }


}