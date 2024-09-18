// Challenge 6 : Structure et Tableau de Structures
// Écrivez un programme C qui définit une structure pour représenter un produit avec les
//  champs nom, prix, et quantité. Créez un tableau de plusieurs produits, assignez des 
//  valeurs aux champs, puis affichez les informations de chaque produit.
#include <stdio.h>
#include <stdlib.h>

struct Product {
    char name[50];
    float price;
    int quantity;
};

int main() {
    int number_of_products;

    printf("Veuillez entrer le nombre de produits : ");
    scanf("%d", &number_of_products);

    if (number_of_products <= 0) {
        printf("Veuillez entrer un nombre valide !\n");
        return 1; 
    }

    
    struct Product products[number_of_products];

    
    for (int i = 0; i < number_of_products; i++) {
        printf("Nom du produit %d : ", i + 1);
        scanf("%s", products[i].name);
        printf("Prix du produit %d : ", i + 1);
        scanf("%f", &products[i].price);
        printf("Quantité du produit %d : ", i + 1);
        scanf("%d", &products[i].quantity);
    }

    
    printf("\nInformations sur les produits :\n");
    for (int i = 0; i < number_of_products; i++) {
        printf("Produit %d :\n", i + 1);
        printf("Nom : %s\n", products[i].name);
        printf("Prix : %.2f\n", products[i].price);
        printf("Quantité : %d\n\n", products[i].quantity);
    }

    return 0; 
}
