#include <stdio.h>

void print_array(int array[], int length) {
    printf("Array: \n");
    for (int i = 0; i < length; ++i) {
        printf("%i\n", array[i]);
    }
}

int main(void) {

    // loops
    int length = 10;

    int size = length;
    int myNums[size];

    for (int i = 0; i < length; ++i) {
        myNums[i] = i;
    }

    print_array(myNums, size);

    // pointers and variables
    // declare an integer
    int num = 5;
    printf("num: %i\n", num);

    // declare a pointer (a variable containing an address to another variable, a memory address)
    int* ptr = &num;

    // declare a value that dereferences the pointer, returning the value it's pointing to
    int val = *ptr;

    // print the value
    printf("dereferenced pointer: %d\n",val);

    // if statements
    int x = 10;

    if (x == 10) {
        printf("x is ten");
    }

    return 0;
}
