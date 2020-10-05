#include <stdio.h>
#include <ctype.h> 
#include <stdbool.h>

#define MAX 10 

int main(){
    int word_count = 0;
    char input[MAX];
    int is_digit;
    bool no_digits = true;
    fgets(input, MAX, stdin);

    printf("%s",input);
    
    for(int i = 0; i < MAX; i++){
        while(input[i] != ' '){
            is_digit = isdigit(input[i]);
            if(is_digit==0){
                no_digits = true;
            }else{
                no_digits = false;
            }
         }

        if (is_digit==0){
            ++word_count;
        }
   }
    printf("\n%d",word_count);  
}
         
