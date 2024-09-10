// Challenge 13 : Point sur un Segment
// Écrivez un programme C qui lit les coordonnées des deux extrémités d'un segment, et lit ensuite les coordonnées d'un point dans le plan et dit si ce dernier se trouve ou non sur le segment.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float x,y, z, x1,y1, z1 ;
    printf("please enter the value of x\n") ;
    scanf("%f",&x) ;
    printf("please enter the value of y\n") ;
    scanf("%f",&y) ;
    z = y - x ;
    printf("\n") ;
    printf("please enter the value x1 of point\n") ;
    scanf("%f",&x1) ;
    printf("please enter the value of y1 point\n") ;
    scanf("%f",&y1) ;
    z1 = y1 - x1 ;
    if (z >= z1){
        printf("this point is in the segment\n");
    }else {
        printf("this point is not in the segment\n");
    }

}