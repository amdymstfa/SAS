// Challenge 6 : Calcul et affichage des résultats
// Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.


#include <stdio.h>

int main(){
    float a, b  ;

    printf("please enter the value of a : \n") ;
    scanf("%f" , &a);

    printf("please enter the value of b : \n") ;
    scanf("%f" , &b); 

    printf("the sum is : %.2f\n", a+b);
    printf("the diff is : %.2f\n", a-b);
    printf("the product is : %.2f\n", a*b);
    printf("the quotient is : %.2f\n", a/b);

    printf("thanks you !");


}