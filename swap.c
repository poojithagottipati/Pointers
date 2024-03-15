#include <stdio.h>

int main() {
    int a, b, c;
    int *ptr1, *ptr2;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;

    c = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = c;

    printf("After swapping:%d %d\n", a, b);
    return 0;
}
/*
Enter two numbers: 5 6 
After swapping:6 5
*/
