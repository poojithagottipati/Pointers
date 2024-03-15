#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr1[size];
    int arr2[size], i;
    
    int *ptr1=arr1;
    int *ptr2=arr2;
    
    printf("Enter the elements of the array1:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", ptr1+i);
    }
    printf("Enter the elements of the array2:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", ptr2+i);
    }
    
   for (int i = 0; i < size; i++) {
        int temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }
    printf("After swapping, elements in array 1: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr1 + i));
    }
    printf("\n");
    
    printf("After swapping, elements in array 2: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr2 + i));
    }
    printf("\n");
    
    return 0;
}
/*
Enter the size of the array: 3   
Enter the elements of the array1:
1 4 7
Enter the elements of the array2:
8 6 7
After swapping, elements in array 1: 
8 6 7 
After swapping, elements in array 2: 
1 4 7 
*/
