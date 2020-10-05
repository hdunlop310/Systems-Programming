#include <stdio.h>
#include <string.h>

#define MAX 32

struct Film{
    char title[MAX];
    char lead_actor[MAX];
    int film_id;
};

void print_structure(struct Film *film){
    printf( "Film title : %s\n", film->title);
    printf( "Film lead actor : %s\n", film->lead_actor);
    printf( "Film ID : %d\n", film->film_id);
}

/*
 * need to use pointers to change this value outside the scope of the function
 * void change_actor(struct Film film){
 *     strcpy(film.lead_actor, "Heath Ledger"); 
 *         //print_structure(film);
 *         }
 *         */

//this works
void change_actor_pointers(struct Film *film){
    strcpy(film->lead_actor, "Heath Ledger"); 
 }

int main(){
    struct Film film1, film2;
     strcpy( film1.title, "Batman: The Dark Knight");
     strcpy( film1.lead_actor, "Christian Bale"); 
     film1.film_id = 1;

     strcpy( film2.title, "Avengers: Endgame");
     strcpy( film2.lead_actor, "Robert Downey Jr"); 
     film2.film_id = 2;

     print_structure(&film1);
     printf("\n");

     print_structure(&film2);
     printf("\n");

     change_actor_pointers(&film1);
     print_structure(&film1);
}
