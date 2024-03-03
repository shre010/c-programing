#include<stdio.h>
#include<math.h>
 int main()
{
    int x;
    int val1,val2,count=0,i;
    printf("enter a number :");
    scanf("%d",&x);
    val1=ceil(sqrt(x));
    val2=x;
    for(i=2;i<=val1;i++)
    {
      if(val2%i == 0)
      {
          count=1;
      }

    }
    if((count=0 && val2!=1) || val2 == 2 || val2 == 3 )
    {
        printf("%d the number is prime",val2);
    }
    else
    {
        printf("%d the number is not prime T_T",val2);
    }
return 0;
}
