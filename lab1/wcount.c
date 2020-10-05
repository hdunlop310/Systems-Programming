#include <stdio.h>
#include <ctype.h> 
#include <stdbool.h>

#define MAX 64

int main(){
    int word_count;
    char input[MAX];

    fgets(input, MAX, stdin);

    printf("%s",input);
    int i = 0;
    while(input[i]){
        while(input[i] != '\0'){
            printf("%c",input[i]);
            if(ispunct(input[i])==0){
            ++word_count;
        }
        }

        i++;
    }


    printf("\n%d\n",word_count);

    

}