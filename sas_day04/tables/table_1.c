// Challenge 1 : Initialisation et Affichage
// Écrivez un programme C qui initialise un tableau d'entiers avec des valeurs données et affiche ces valeurs. 
// Par exemple, vous pouvez initialiser un tableau avec les valeurs [1, 2, 3, 4, 5] et afficher chaque valeur sur une nouvelle ligne.


#include <stdio.h>

int main(){
    int table[5] = {1, 2, 3, 4, 5}; //this table is initializid without dimension
    int table_dim = sizeof(table)/sizeof(table[0]);

    for (int i = 0 ; i <table_dim ;i++){
        printf("%d\n", table[i]);
    }
} 