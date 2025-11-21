#include<stdio.h>
int main()
{
    int num;
    printf("Number from 1 to 20: \n");
    for( int i= 1; i<= 20;i++)
    if(i%2==0){
        printf("%d ",i);
    }
}