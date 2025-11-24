#include <stdio.h>
int main()
{
    printf("main function");
    add();
    int res = sub();
    printf("sub is : %d", res);
}
void add()
{
    printf("addition is : %d\n", (10 + 10));
}
int sub()
{
    return 30 - 20;
}
