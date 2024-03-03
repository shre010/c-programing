#include<stdio.h>
int main()
{
    int num,count=0,mul=1,result=1,cnt,rem;
    printf("enter a number:");
    scanf("%d",&num);

    int q = num;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    cnt=count;
    q=num;
    while(q!=0)
    {
        rem=q%10;
        while(cnt!=0)
        {
            mul=mul*rem;
            cnt--;
        }
        result=result+mul;
        cnt=count;
        q=q/10;
        mul=1;
    }
    if(result == num)
    {
        printf("%d the number is an armstrong number",num);
    }
    else
    {
        printf("%d the number is not an armstrong number",num);
    }
}
