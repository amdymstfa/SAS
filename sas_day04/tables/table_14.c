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
        
        float average = 0, sum = 0 ;
        for (int i = 0 ; i < size_of_table; i++){
            sum += table[i] ;
        }
        average = sum/size_of_table ;
        printf("average = %f", average) ;
    }
    
}