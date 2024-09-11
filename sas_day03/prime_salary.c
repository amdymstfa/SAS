// Challenge 9 : Calcul du Salaire avec Primes
// Écrivez un programme C pour calculer le salaire d'un employé en fonction de :

// Salaire de base (en euros)
// Nombre d'heures supplémentaires
// Type de poste (1 pour junior, 2 pour senior)

// Les règles de calcul sont :

// Heures supplémentaires : 1,5 fois le taux horaire
// Prime pour poste senior : 20% du salaire de base
// Prime pour poste junior : 10% du salaire de base
#include <stdio.h> 

int main(){
    float base_salary , time_work_up, type_of_position ,base_salary_h , total_salary;
    printf("please enter your base salary :\n");
    scanf("%f", &base_salary) ;
    printf("please enter your time work up :\n");
    scanf("%f", &time_work_up) ;
    printf("please enter your type of position\n (1  junior, 2  senior) : \n");
    scanf("%f", &type_of_position) ;

    if (time_work_up != 0){
        base_salary_h += (base_salary*2*1.5)/100 ;
    } else {
        printf( "no working up of the time");
    } 
    if (type_of_position == 1){
        base_salary += (base_salary*20)/100 ;
    } else if (type_of_position == 2) {
        base_salary += (base_salary*10)/100 ;
    }
    total_salary = base_salary + base_salary_h ;
    printf("total salary : %.3f\n", total_salary) ;
    
}