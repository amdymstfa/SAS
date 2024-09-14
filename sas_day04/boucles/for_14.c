// Challenge 14 : Sélection de Sortie
// Écrivez un programme C qui affiche les jours de la semaine à l'utilisateur et lui demande de choisir un jour.
//  Le programme doit afficher le jour sélectionné et les jours qui le suivent dans la semaine.
//  Assurez-vous de gérer les jours de la semaine correctement (lundi, mardi, etc.).

#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("1 : monday\n 2 : thuesday\n 3 : wednesday\n 4 : thursday\n 5 : friday\n 6 : saturday\n 7 : sunday\n");
        printf("please choose a day\n");
        scanf("%d", &n);
        if (  n < 1 || n > 7){
            printf("invalid choice\n");
        }
    } while (n < 1 || n > 7); 

        switch (n)
        {
        case 1:
            printf(" 2 : thuesday\n 3 : wednesday\n 4 : thursday\n 5 : friday\n 6 : saturday\n 7 : sunday\n");
            break;
        case 2:
            printf(" 3 : wednesday\n 4 : thursday\n 5 : friday\n 6 : saturday\n 7 : sunday\n");
            break;
        case 3:
            printf(" 4 : thursday\n 5 : friday\n 6 : saturday\n 7 : sunday\n");
            break;
        case 4:
            printf("5 : friday\n 6 : saturday\n 7 : sunday\n");
            break;
        case 5:
            printf("6 : saturday\n 7 : sunday\n");
            break;
        case 6:
            printf("6 : saturday\n 7 : sunday\n");
            break;
        case 7:
            printf("good weekend\n");
            break;

        default:
            break;
        }
}