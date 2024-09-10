#include <stdio.h>

int main(){
    int gain , score , delay ;
    printf("veillez les informations suivantes\n") ;
    printf("revenu annuel :") ;
    scanf("%d", &gain) ;
    printf(" score : " ) ;
    scanf("%d", &score) ;
    printf("delai de remboursement :" ) ;
    scanf("%d", &delay) ;

    if  (gain >= 30000 && score >= 700 && delay <= 10){
        printf("votre pret sera accordee sans conditions"); 
    }
    else if  (gain >= 30000 && score >= 650 && delay <= 15){
        printf("votre pret sera accordee avec conditions");  
    } else{
        printf("vous ne pouvew pas faire un pret pour le moment") ;
    }
}