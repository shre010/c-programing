#include<stdio.h>
main()
{
    int num1,num2;
    printf("enter values to check equality");
    scanf("%d%d",&num1,&num2);
    if(num1 == num2)
    {
        printf("the above entered numbers are equal\n");

    }
    else
    {
        printf("the numbers are not equal");
    }
}
