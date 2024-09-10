// Challenge 13 : Affichage des valeurs binaire et hexadécimale équivalentes
// Écrivez un programme C pour afficher la valeur équivalente en binaire et en hexadécimal. Entrez un nombre entier et affichez ses valeurs équivalentes en binaire et en hexadécimal.

#include <stdio.h>

#include <stdio.h>

int main() {
    int num;

    
    printf("please enter a number : ");
    scanf("%d", &num);

    
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;  
        printf("%d", bit);
    }
    

    
    printf("binaire: %X\n", num);

    return 0;
}
