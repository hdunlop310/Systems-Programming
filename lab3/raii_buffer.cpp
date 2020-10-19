#include <stdio.h>
#include <stdlib.h>
#include <memory>

struct buffer {
    std::unique_ptr<struct node> ptr;

    buffer(int initial_size) {
        std::unique_ptr<struct node> ptr;
    }
    ~buffer() { }
    void add(int element) {
    // check if there is enough room left.
    // If not, allocate new memory with enough space and
    // copy all elements from the old memory over.
    // Ensure to not leak memory!
    this->left_child = std::make_unique<node>(value_ptr);
    this->left_child->parent = this;
    }
};
Typedef struct buffer buffer;


int main() {
    buffer b(3); // allocate space for 3 ints
    b.add(1);
    b.add(2);
    b.add(3);
    b.add(4); // this call must allocate new memory
}