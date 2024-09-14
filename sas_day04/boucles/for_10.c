// Challenge 10 : Générateur de Mot de Passe
// Écrivez un programme C qui génère un mot de passe aléatoire de longueur n, où n est entré par l’utilisateur.
//  Le mot de passe doit contenir des lettres majuscules, des lettres minuscules, et des chiffres.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    char password[15];
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    int charset_size = sizeof(charset) - 1;
    char keypress;

    srand(time(0));

    printf("please enterr the size of your passeword!\n");
    keypress = getchar();

    if (keypress == 0 || keypress == '\n' || keypress == ' ')
    {
        return 0;
    }

    ungetc(keypress, stdin);
    scanf("%d", &n);

    if (n <= 0 && n >= 15)
    {
        printf("your passeword have to content between 1 and 15 caracters!\n ");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        password[i] = charset[rand() % charset_size];
    }

    printf("your password is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%c", password[i]);
    }
    printf("\n");
}