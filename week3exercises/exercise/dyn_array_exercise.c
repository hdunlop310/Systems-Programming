#include <stdlib.h>
#include <stdio.h>

int main() {
    printf("How many numbers do you want to store in the array? ");
    int size;
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

