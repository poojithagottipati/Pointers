#include <stdio.h>

int main() {
    int number = 10; 
    int *ptr;     
    ptr = &number; 
    printf("Value of number: %d\n", *ptr);
    *ptr = 20;
    printf("New value of number: %d\n", number);

    return 0;
}
/*
Value of number: 10
New value of number: 20
*/
