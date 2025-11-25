#include <stdio.h>
#include <string.h>
int main()
{
    char first_name[] = "pavan";
    char last_name[] = "gowda";
    char another_name[] = "pavan";

    printf("length of first_name: %d\n", strlen(first_name));
    printf("Full name: %s\n", strcat(first_name, last_name));
    printf("%d\n", strcmp(first_name, another_name));
    if (strcmp(first_name, another_name) == 0)
    {
        printf("Both Strings are equal\n");
    }
    else
    {
        printf("Both Strings are not equal\n");
    }
}
