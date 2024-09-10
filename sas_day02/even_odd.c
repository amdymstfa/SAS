// 

#include <stdio.h>

int main(){
    int n ;
    printf("please enter an integer :\n") ;
    scanf("%d", &n);
    if (n%2 == 0) {
        printf("%d : even number", n); 
    }else {
        printf("%d : odd number", n);

    }
}