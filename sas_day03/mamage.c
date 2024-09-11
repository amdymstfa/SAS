// Les règles de gestion sont :

// Temps plein : Jours restants = Jours accordés - Jours utilisés
// Temps partiel : Jours restants = (Jours accordés / 2) - Jours utilisés
// Si les jours utilisés dépassent les jours accordés, affichez un message d'alerte.

#include <stdio.h>

int main()
{
    int status, numbers_days_off, numbers_days_reminders, numbers_days_used;

    printf("please enter your status : \n press 0 if part time and 1 if full time :\n");
    scanf("%d", &status);

    printf("please enter your numberts days off\n");
    scanf("%d", &numbers_days_off);
    printf("please enter your numbers days used\n");
    scanf("%d", &numbers_days_used);

    // if (status == 1)
    // {
    //     numbers_days_reminders = numbers_days_off - numbers_days_used;
    // }
    // else if (status == 0)
    // {
    //     numbers_days_reminders = (numbers_days_off / 2) - numbers_days_used;
    // }
    // printf("days reminders : %d \n", numbers_days_reminders);

    switch (status)
    {
    case 0:
        numbers_days_reminders = (numbers_days_off / 2) - numbers_days_used;
        printf("days reminders : %d \n", numbers_days_reminders);

        break;
    case 1:
        numbers_days_reminders = numbers_days_off - numbers_days_used;
        printf("days reminders : %d \n", numbers_days_reminders);

        break;

    default:
        printf("invalud status\n");
        break;
    }
    if (numbers_days_used > numbers_days_off)
    {
        printf("you have to come back at work\n");
    }
}