#include<stdio.h>
int i=0;
int main()
{
    printf("enter the values 0-10\n");
    while(i>=0)
    {
        printf("%d",&i);
        i++;
    }
    printf("\n");
    i=10;
    printf("numbers 10-0\n");
    while(i>=0)
    {
        printf("%d",i);
        i--;
    }
    return 0;
}

