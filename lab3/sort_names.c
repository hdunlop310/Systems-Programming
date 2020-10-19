#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct name {
    const char * first_name;
    const char * last_name;
};
typedef struct name name;

static int compare_by_first(const void *arg1, const void *arg2) {
    name ia = *(name *)arg1;
    name ib = *(name *)arg2;
    return strcmp(ia.first_name, ib.first_name);
}

static int compare_by_second(const void *arg1, const void *arg2) {
    name ia = *(name *)arg1;
    name ib = *(name *)arg2;
    return strcmp(ia.last_name, ib.last_name);
}

int main() {
    name names[4] = {
    {"Grace", "Hopper"},
    {"Dennis", "Ritchie"},
    {"Ken", "Thompson"},
    {"Bjarne", "Stroustrup"},
    };    

    qsort(names, 4, sizeof(name), compare_by_first);
    
    printf("Sorted by first name:\n");

    for (int i = 0; i<4; i++){
        printf("%s %s\n",names[i].first_name, names[i].last_name);
    }

    qsort(names, 4, sizeof(name), compare_by_second);
    printf("\nSorted by second name:\n");

    for (int i = 0; i<4; i++){
        printf("%s %s\n",names[i].first_name, names[i].last_name);
    }
    
    return 0;

}