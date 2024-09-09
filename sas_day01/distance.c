// Challenge 3 : Conversion de la distance
// Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. Formule :

// Yards = Km * 1093.61

#include <stdio.h>

int main(){
    float Km ; 
    float Yards ; 
    

    printf("please enter the the distance in km :\n") ;
    scanf("%f", &Km) ;
    Yards = Km * 1093.61 ;
    printf("the distance in yards is : %.3f\n", Yards) ;

}
