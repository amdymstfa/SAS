// Challenge 4 : Conversion de la vitesse
// Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s). Formule :

// m/s = km/h * 0.27778

#include <stdio.h>

int main(){
    float mps ; // speed in meter by second
    float kph ; // speed in kilometer by hour
    
    

    printf("please enter the speed in kph :\n") ;
    scanf("%f", &kph) ;
    mps = kph * 0.27778 ;
    printf("the speed in mps : %f\n", mps) ;

}
