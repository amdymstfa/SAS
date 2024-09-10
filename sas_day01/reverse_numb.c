// Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
// Écrivez un programme C pour afficher un nombre entier à quatre chiffres dans
// l'ordre inverse sans utiliser de boucle. Par exemple, si le nombre entier est 1234,
// son inverse est 4321.

#include <stdio.h>

int main()
{
    int num;
    printf("please enter number of four digit\n");
    scanf("%d", &num);
    if (num <= 999 || num > 9999)
    {
        printf("the numbers must contain four digits, try again :\n");
    }
    else
    {
        int x = num % 10;
        int y = (num / 10) % 10;
        int z = (num / 100) % 10;
        int w = (num / 1000) % 10;

        printf("digits reverse : %d%d%d%d\n", x, y, z, w);
    }
}
