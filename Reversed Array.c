#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    int *ptr=arr;
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", ptr+i);
    }
    printf("reversed Array:");
    for(int i=size-1;i>=0;i--){
        printf("%d ", *(ptr+i));
    }
    printf("\n");
    
    return 0;
}
/*
Enter the size of the array: 3
Enter the elements of the array:
6 7 8
reversed Array:8 7 6 
*/
