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
        
        printf("odd table:") ;
        for (int i = 0 ; i < size_of_table; i++){
            if (table[i]%2 != 0){
                printf(" %d\t", table[i]) ; 
            }
        }
    }
    
}