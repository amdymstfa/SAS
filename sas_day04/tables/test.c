#include<stdio.h>

int main(){
    int size_of_table , find_value;
    printf("please enter the size of your table : \n");
    scanf("%d", &size_of_table) ;
    // if (size_of_table < 0){
    //     printf("please enter a valid value, the size of table migth to be positif.\n");
    // }else {
        
    // }
    printf("please enter a value :\t" ) ;
        scanf("%d", &find_value);
        printf("\n") ;
        int table[size_of_table] ;
        for (int i = 0 ; i < sizeof(table[size_of_table])/sizeof(table[0]); i++){
            printf("please enter the element  %d : ", i+1) ;
            scanf("%d", &table[i]);
            if (find_value == table[i]){
                printf("the value is an element of the table.\n");
            }else {
                printf("the value is not an element of the table.\n");
            }
        }
    
}