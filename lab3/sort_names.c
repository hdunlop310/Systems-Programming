#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct name {
    const char * first_name;
    const char * last_name;
};
typedef struct name name;

static int compare_names(const void *arg1, const void *arg2) {
    return strcmp( *(char * const *) arg1, *(char * const *) arg2);
}

int main() {
    name names[4] = {
    {"Grace", "Hopper"},
    {"Dennis", "Ritchie"},
    {"Ken", "Thompson"},
    {"Bjarne", "Stroustrup"},
    };    
    size_t names_length = sizeof(names)/sizeof(name);
    qsort(names, names_length, sizeof(name *), compare_names);

    return 0;

}