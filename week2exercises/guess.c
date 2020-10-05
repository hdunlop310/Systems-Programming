#include <stdio.h>
#include <stdlib.h>

int main(){
    int number, guess;
    number = rand() % (10 + 1); 
    printf("Guess the number: \n");
    while ( scanf( "%d", &guess ) == 1 ){
        if (guess > number){
            printf("Guess is too high!\n");
        }else if (guess < number){
            printf("Guess is too low!\n");
        }else{
            printf("You got it!");
        }
    }
}
