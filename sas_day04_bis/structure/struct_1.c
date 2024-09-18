// Challenge 1 : Définition et Utilisation de Structure
// Écrivez un programme C qui définit une structure pour représenter une personne avec les champs nom, prenom, et age. 
// Créez une variable de cette structure, assignez des valeurs aux champs, et affichez ces valeurs.


#include <stdio.h>

 struct Person
    {
        char lastname[10] ;
        char firstname[10] ;
        int age ;
    }person1;

int main(){
   
   printf("please enter your lastname!\n");
   scanf("%s", person1.lastname);
   printf("please enter your firstname!\n");
   scanf("%s", person1.firstname);
   printf("please enter your age!\n");
   scanf("%d", &person1.age) ;


   printf("lastname : %s\n", person1.lastname);
   printf("firstname : %s\n", person1.firstname);
   printf("age : %d\n", person1.age) ;
    
}