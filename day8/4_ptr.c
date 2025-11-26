#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("Before changing value of a: %d \n", a);
    *ptr = 80;
    printf("After changing value of a: %d \n", a);
    (*ptr)++;
    printf("After changing value of a: %d \n", a);
}