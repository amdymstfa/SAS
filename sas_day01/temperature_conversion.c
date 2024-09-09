// Challenge 2 : Conversion de la température
// Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. Formule :

// K = C + 273.15

#include <stdio.h>

int main(){
    float C ; // temperature in degrees Celsius
    float K ; // temperature in degrees kelvin
    

    printf("please enter the temperature in degrees celsus :\n") ;
    scanf("%f", &C) ;
    K = C + 273.15 ;
    printf("the temperature in degree kelvin is : %f\n", K) ;

}
