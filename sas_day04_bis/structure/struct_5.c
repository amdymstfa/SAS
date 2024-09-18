// Challenge 5 : Structure et Fonction de Retour
// Écrivez un programme C qui définit une structure pour représenter
//  un livre avec les champs titre, auteur, et année. 
//  Écrivez une fonction qui retourne une variable de cette structure initialisée avec 
//des valeurs données.

// Affichez les informations du livre dans le programme principal.


#include <stdio.h>
#include <stdlib.h>

struct Book
    {
        char title[50];
        char author[50];
        int date_of_publication ;
    };

char* book_information(struct Book *book){
    return book->title ;
}

int main(){
    struct Book book ;
    printf("please enter the title of the book!\n");
    scanf("%49s", book.title);

    printf("tilte : %s\n", book_information(&book));
}