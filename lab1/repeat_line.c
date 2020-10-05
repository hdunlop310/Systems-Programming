#include <stdio.h>
#include <string.h>

#define MAX 64

int main (void)
{
    char input[MAX];
    while (fgets(input, MAX, stdin)) {
        printf("%s",input);
    }
}
