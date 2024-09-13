// Challenge 7 : Suite de Fibonacci
// Écrivez un programme C qui génère les n premiers termes de la suite de Fibonacci, où n est entré par l’utilisateur. 
// La suite de Fibonacci est définie comme suit : F(0) = 0, F(1) = 1, et F(n) = F(n-1) + F(n-2).

#include <stdio.h>

int main(){
    int n ;
    printf("please enter a number !\n") ;
    scanf("%d", &n) ;
    if (n<0)
    {
       printf("please enter a valide number!\n");
    }else if (n == 0 ){
        printf("F(%d) = %d\n", n, n) ;
    }else if (n == 1){
        printf("F(%d) = %d\n", n, n) ;
    }else {
        n = (n-1) + (n-2) ;
        printf("F(%d) = %d\n", n-1, n) ;
    }
    
}