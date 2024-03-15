#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the strings: ");
    scanf("%d", &size);
    
    char str1[size];
    char str2[size];
    
    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);
    
    char *ptr1 = str1;
    char *ptr2 = str2;

    for (int i = 0; i < size && *ptr1 != '\0' && *ptr2 != '\0'; i++) {
        char temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2++;
    }
    
    printf("After swapping, string 1: %s\n", str1);
    printf("After swapping, string 2: %s\n", str2);

    return 0;
}
/*
Enter the size of the strings: 5
Enter string 1: pooji
Enter string 2: apple
After swapping, string 1: apple
After swapping, string 2: pooji
*/
