#include <stdio.h>

int main(void) {
    // declare an integer
    int num = 5;

    // declare a pointer (a variable containing an address to another variable, a memory address)
    int* ptr = &num;

    // declare a value that dereferences the pointer, returning the value it's pointing to
    int val = *ptr;

    // print the value
    printf("%d",val);

    return 0;
}
