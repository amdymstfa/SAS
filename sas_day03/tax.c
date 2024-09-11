#include <stdio.h>

int main() {
    float revenu, deductions, revenu_imposable, impot;
    int statut_fiscal;

    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu);

    printf("Entrez votre statut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille) : ");
    scanf("%d", &statut_fiscal);

    if (statut_fiscal == 1) {
        deductions = 1000;
    } else if (statut_fiscal == 2) {
        deductions = 2000;
    } else if (statut_fiscal == 3) {
        deductions = 3000;
    } else {
        deductions = 0;
    }

    revenu_imposable = revenu - deductions;

    if (revenu_imposable <= 20000) {
        impot = revenu_imposable * 0.05;
    } else if (revenu_imposable <= 50000) {
        impot = revenu_imposable * 0.10;
    } else {
        impot = revenu_imposable * 0.20;
    }

    printf("L'impôt à payer est : %.2f euros\n", impot);

    return 0;
}
