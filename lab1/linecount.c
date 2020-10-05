#include <stdio.h>
#include <string.h>

int readline(char line[], int max){
    int line_count, c;
    line_count = 0;
    while ((c = getchar()) != EOF ){
        if (c == '\n'){
            ++line_count;
        }
    }
    return line_count;
}


int main(){
    int max = 10;
    char line[max];
    int line_count = readline(line, max);
    printf("\n%d\n",line_count);
}