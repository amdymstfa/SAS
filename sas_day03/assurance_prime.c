// Les règles de calcul sont :

// Conducteur de moins de 25 ans : Prime de base * 1.5
// Conducteur de 25 à 65 ans : Prime de base
// Conducteur de plus de 65 ans : Prime de base * 1.2
// Type de voiture sportive : Prime * 2
// Type de voiture utilitaire : Prime * 1.2
// Type de voiture familiale : Prime * 1.1
// Nombre d'accidents > 1 : Ajoutez 30% à la prime


#include <stdio.h> 

int main(){
    int age , accident ;
    float prime_de_base , prime  ;
    char car_style ;

    printf("please enter your base prime :\n") ;
    scanf("%f", &prime_de_base) ;
    printf("please enter your age :\n") ;
    scanf("%d", &age) ;

    if (age < 25){
        prime = prime_de_base*1.5 ;
    }else if (age >= 25 && age <= 65){
        prime = prime_de_base ;
    }else{
        prime = prime_de_base*1.2 ;
    }

    printf("car_style style : \n") ;
    scanf(" %c", &car_style) ;
    if (car_style == 'U'|| car_style == 'u'){
        prime *= 1.2 ;
    }else if (car_style == 'S'|| car_style == 's'){
        prime *= 2 ;
    } else {
        prime *= 1.1 ;
    }

    printf("accidents numbers:\n") ;
    scanf("%d", &accident) ;
    if (accident > 1){
        prime += (prime*30)/100 ;
    }

    printf("final prime : %.2f\n", prime);

}