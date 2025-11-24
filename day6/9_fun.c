#include <stdio.h>
int sub(int num1, int num2);
int main()
{
    int res1 = sub(4, 5);
    int res2 = sub(40, 50);
    int res3 = sub(20, 30);
    int res4 = sub(30, 40);
    int res5 = sub(40, 50);
    printf("res1: %d\n", res1);
    printf("res2: %d\n", res2);
    printf("res3: %d\n", res3);
    printf("res4: %d\n", res4);
    printf("res5: %d\n", res5);
}

int sub(int num1, int num2)
{
    return num1 - num2;
}