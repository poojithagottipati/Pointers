#include <stdio.h>
int main() {
    
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    int *ptr=arr;

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements: ");
    
    for (i = 0; i < size; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");
    return 0;
}
/*
*/
