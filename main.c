#include <stdio.h>

void print_array(int array[], int length) {
    printf("Array: \n");
    for (int i = 0; i < length; ++i) {
        printf("%i\n", array[i]);
    }
}

int main(void) {

    int length = 10;

    int size = length;
    int myNums[size];

    for (int i = 0; i < length; ++i) {
        myNums[i] = i;
    }

    print_array(myNums, size);

    int num = 5;
    printf("num: %i\n", num);

    int* ptr = &num;

    int val = *ptr;

    printf("dereferenced pointer: %d\n",val);

    int x = 10;

    if (x == 10) {
        printf("x is ten");
    }

    return 0;
}
