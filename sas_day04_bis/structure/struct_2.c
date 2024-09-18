// Challenge 2 : Structure avec Tableau
// Écrivez un programme C qui définit une structure pour représenter un étudiant avec les champs nom, prenom, 
// et un tableau d'entiers pour stocker les notes. 
// Assignez des valeurs aux champs et aux notes, puis affichez les informations de l'étudiant.


#include <stdio.h>

 struct student
    {
        char lastname[10] ;
        char firstname[10] ;
        int grades[10];
        int age ;
    }student1;

int main(){
   int i = 0 ;
   printf("please enter your lastname!\n");
   scanf("%s", student1.lastname);
   printf("please enter your firstname!\n");
   scanf("%s", student1.firstname);
   printf("please enter your age!\n");
   scanf("%d", &student1.age) ;
   printf("please enter your grade!\n");
   scanf(" %d", &student1.grades) ;


   printf("lastname : %s\n", student1.lastname);
   printf("firstname : %s\n", student1.firstname);
   printf("age : %d\n", student1.age) ;
    printf("grade : %d\n", student1.grades[i]) ;
    i++;
    
}