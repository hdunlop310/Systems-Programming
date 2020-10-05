#include<stdio.h>
#include<ctype.h>

#define MAX 64

int main(){
    char input[MAX];
    int i = 0, c = 0;

    while(i < MAX && ((c=getchar())!= EOF)&& c !='\n'){
        if(!isspace(c)){
           input[ i++] = c;      
        }  
    }
    input[i] = '\0';
    for(i = 0; input[i]; i++)
        putchar(input[i]);
    putchar('\n');

    return 0;
}
