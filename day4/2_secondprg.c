#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter the first value a");
    scanf("%d", &a);
    printf("Enter the second value b");
    scanf("%d", &b);
    c = a + b;
    printf("Sum of %d and %d:%d\n", a, b, c);
}