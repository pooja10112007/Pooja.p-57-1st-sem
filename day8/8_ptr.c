#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    printf("Before swapping:\n");
    printf("a: %d \n", a);
    printf("b: %d\n", b);
    int temp = a;
    a = b;
    b = temp;
    printf("Ater swapping:\n");
    printf("a: %d \n", a);
    printf("b: %d \n", b);
}