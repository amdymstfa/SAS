// Challenge 10 : Formatage de la Date
// Écrivez un programme C qui lit une date au format 15/09/2012 et l'affiche sous le format
// suivant : 15-Septembre-2012

// jj/mm/aaaa to jj-mm-aaaa (=> / > -)

#include <stdio.h>

int main(){
    int jj , mm , aaaa ;

    printf("please enter a date, exemple 15/09/2012\n "); 
    scanf("%d/%d/%d", &jj, &mm, &aaaa) ;
    
    switch (mm)
    {
                case 1:
                        printf("%d-january-%d", jj,aaaa);
                        break;
                case 2:
                        printf("%d-february-%d", jj,aaaa);
                        break;
                case 3:
                        printf("%d-march-%d", jj,aaaa);
                        break;
                case 4:
                        printf("%d-April-%d", jj,aaaa);
                        break;
                case 5:
                        printf("%d-May-%d", jj,aaaa);
                        break;
                case 6:
                        printf("%d-June-%d", jj,aaaa);
                        break;
                case 7:
                        printf("%d-July-%d", jj,aaaa);
                        break;
                case 8:
                        printf("%d-August-%d", jj,aaaa);
                        break;
                case 9:
                        printf("%d-September-%d", jj,aaaa);
                        break;
                case 10:
                        printf("%d-October-%d", jj,aaaa);
                        break;
                case 11:
                        printf("%d-November-%d", jj,aaaa);
                        break;

                case 12:
                        printf("%d-December-%d", jj,aaaa);
                        break;
                default:
                        break;
    }
}