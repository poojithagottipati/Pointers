#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size] ;
    int x;
    int *ptr = arr; 

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", ptr+i);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &x);

    while (ptr < arr + size) {
        if (*ptr == x) {
            printf("Element %d found at index %d.\n", x, ptr - arr);
            break; 
        }
        ptr++; 
    }
    if (ptr == arr + size) {
        printf("Element %d not found in the array.\n", x);
    }

    return 0;
}
/*
Enter the size of the array: 3
Enter the elements of the array:
1 2 2
Enter the element to search for: 2
Element 2 found at index 1.
*/
