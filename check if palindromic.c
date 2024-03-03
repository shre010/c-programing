#include<stdio.h>
int main()
{
    int n,result=0,q,rem;
    printf("please enter a number: ");
    scanf("%d",&n);
    q=n;


    while (q!=0)
    {
        rem=q%10;
        result=result*10+rem;
        q=q/10;
    }
    if(result==n)
    {
        printf("the number entered is palindromic");
    }
    else
    {
        printf("the number is not palindromic");
    }
    return 0;

}
