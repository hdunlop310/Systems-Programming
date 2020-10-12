#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("%c",argv[0];
    if (scanf("%d", &size) == EOF) { exit(-1); }

    int* array = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
    array[i] = i;
    }

    for (int i=0; i < size; i++){
        printf("%p %d\n",&i, i);
    }
    free(array);
}


