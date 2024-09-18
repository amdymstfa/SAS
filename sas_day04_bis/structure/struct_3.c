// Challenge 3 : Passage de Structure en Argument
// Écrivez un programme C qui définit une structure pour représenter un rectangle avec les champs longueur et largeur. 
// Écrivez une fonction qui prend une variable de cette structure en argument et calcule l'aire du rectangle. 
// Affichez l'aire dans le programme principal.
#include <stdio.h>
struct rectangle
{
    float length ;
    float width ;
};

// float area_of_rectangle(float length, float width){
//     return length*width ;
// }
float area_of_rectangle(struct rectangle area){
    return area.length*area.width ;
}

int main(){
    struct rectangle area;
    printf("please enter the length!\n");
    scanf("%f", &area.length);
    printf("please enter the width!\n");
    scanf("%f", &area.width);
    printf("area : %.2f", area_of_rectangle(area));
}
