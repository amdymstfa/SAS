#include <stdio.h>

int main(){
    
    int age ;
    char name[10], surname[10], gender[10], email[50] ;

    printf("please enter your name\n") ;
    scanf("%s", &name) ;

    printf("please enter your surname\n") ;
    scanf("%s", &surname) ;


    printf("please enter your gender\n") ;
    scanf("%s", &gender) ;

    printf("please enter your email\n") ;
    scanf("%s", &email) ;

        printf("please enter your age\n") ;
    scanf("%d", &age) ;

    printf("\n") ;
    printf("name : %s\n surname : %s\n  gender : %s\n email :%s\n age : %d \n", name, surname, gender, email, age) ;

    
}