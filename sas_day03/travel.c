// Challenge 5 : Planification de Voyage
// Écrivez un programme C pour planifier un voyage en fonction de :

// Budget (en euros)
// Destination (1 pour plage, 2 pour montagne, 3 pour ville)
// Nombre de personnes

// Les recommandations sont :

// Budget >= 1000 € : Voyage haut de gamme
// Budget entre 500 € et 1000 € : Voyage moyen
// Budget < 500 € : Voyage économique

// Les destinations recommandées sont :

// Plage pour un budget >= 1000 € et > 2 personnes
// Montagne pour un budget >= 500 € et <= 2 personnes
// Ville pour tout budget et nombre de personnes


#include <stdio.h>

int main() {
    float budget;
    int destination, num_people;

    printf("Enter your budget (in euros): ");
    scanf("%f", &budget);

    printf("Enter your destination (1 for beach, 2 for mountain, 3 for city): ");
    scanf("%d", &destination);

    printf("Enter the number of people: ");
    scanf("%d", &num_people);

    if (budget >= 1000) {
        printf("Recommendation: High-end trip.\n");
    } else if (budget >= 500 && budget < 1000) {
        printf("Recommendation: Mid-range trip.\n");
    } else {
        printf("Recommendation: Budget trip.\n");
    }

    if (destination == 1) {
        if (budget >= 1000 && num_people > 2) {
            printf("Recommended destination: Beach\n");
        } else {
            printf("The budget or number of people doesn't fit for the beach trip.\n");
        }
    } else if (destination == 2) {
        if (budget >= 500 && num_people <= 2) {
            printf("Recommended destination: Mountain\n");
        } else {
            printf("The budget or number of people doesn't fit for the mountain trip.\n");
        }
    } else if (destination == 3) {
        printf("Recommended destination: City\n");
    } else {
        printf("Invalid destination choice.\n");
    }

    return 0;
}
