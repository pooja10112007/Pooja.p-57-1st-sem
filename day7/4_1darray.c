#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter a numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d value is : %d \n", i, arr[i]);
    }
}

