#include<stdio.h>
main()
{
    int a=1,b=3,c=5;
    if(a>b && a>c)
    {
        printf("%d=largest number among 3",a);
    }
    else if(b>a && b>c)
    {
        printf("%d=largest number among 3",b);
    }
    else if(c>a && c>b)
    {
        printf("%d=largest number among 3",c);
    }
}
