// Challenge 12 : Comparaison d'Instants
// Écrivez un programme C qui lit deux instants dans le format HH:MM:SS et affiche un des messages suivants :

// Le premier instant vient avant le deuxième ;
// Le deuxième instant vient avant le premier ;
// Il s'agit du même instant.

#include <stdio.h>
#include <stdio.h>

int main()
{
    int HH, MM, SS, HH1, MM1, SS1;
    printf("please enter the first time, exemple HH:MM:SS :\n");
    scanf("%d:%d:%d", &HH, &MM, &SS);
    // printf("%d:%d:%d\n",HH, MM, SS ) ;
    printf("please enter the second time, exemple HH:MM:SS :\n");
    scanf("%d:%d:%d", &HH1, &MM1, &SS1);

    if (HH == HH1 && MM == MM1 && SS == SS1)
    {
        printf("Il s'agit du même instant\n");
    }
    else if (HH < HH1)
    {
        printf("Le deuxième instant vient avant le premier \n");
    }
    else
    {
        printf("Le premier instant vient avant le deuxième \n");
    }
}