#include <stdio.h>
int main()
{
    int a = 70;
    int b = 50;
    if (a > b)
    {
        printf("a is: %d \n", a);
    }
    else
    {
        printf("b iss: %d \n", b);
    }
    (a > b) ? printf("a is: %d \n", a) : printf("b is: %d \n", b);
}
