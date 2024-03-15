#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], size, i;
    int *ptr1, *ptr2;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    ptr1 = arr1;
    ptr2 = arr2; 
    for (i = 0; i < size; i++) {
        *(ptr2 + i) = *(ptr1 + i); 
    }
    printf("Elements of the copied array (arr2):\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
/*
Enter the size of the array: 5
Enter the elements of the array:
1 2 3 4 5
Elements of the copied array (arr2):
1 2 3 4 5 
*/
