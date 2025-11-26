#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;
    printf("Before swapping:\n");
    printf("a: %d \n", a);
    printf("b: %d\n", b);
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Ater swapping:\n");
    printf("a: %d \n", a);
    printf("b: %d \n", b);
}