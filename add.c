#include <stdio.h>

int main() {
    int a,b,sum;
    int *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;

    sum = *ptr1 + *ptr2;
    printf("Sum : %d\n", sum);

    return 0;
}
/*
Enter two numbers: 6 87
Sum : 93
*/
