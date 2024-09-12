#include <stdio.h>

int main() {
    int size_of_table;

    // Demander la taille du tableau à l'utilisateur
    printf("Please enter the size of the array: ");
    scanf("%d", &size_of_table);

    // Vérifier si la taille est valide
    if (size_of_table <= 0) {
        printf("Size of array must be positive.\n");
        return 1;
    }

    int table[size_of_table];

    // Saisie des éléments du tableau
    printf("Please enter %d elements:\n", size_of_table);
    for (int i = 0; i < size_of_table; i++) {
        scanf("%d", &table[i]);
    } 

    // Tri du tableau en ordre croissant en utilisant le tri à bulles
    for (int i = 0 ; i < size_of_table-1 ; i++){
        for (int j = 0 ; j > size_of_table-i-1 ; j++){
            if (table[j]>table[j+1]){
                int x = table[j];
                table[j] = table[j+1] ;
                table[j+1] = x ;
            }
        }
    }
    

    // Afficher le tableau trié
    printf("The sorted array in ascending order is:\n");
    for (int i = 0; i < size_of_table; i++) {
        printf("%d ", table[i]);
    }
    printf("\n");

    return 0;
}
