#include <stdio.h>
int main()
{
    int num = 100;
    int *ptr = &num;
    printf("Value of num: %d\n", num);
    printf("Value of num using ptr: %p\n", *ptr);
    printf("Address of num: %d\n", &num);
    printf("Address of prt using prt: %p\n", &ptr);
    printf("Address of num using address of a ptr: %p\n", &ptr);
}