#include<stdio.h>
void prt_oddeve(int);
main()
{
    int n;
    printf("enter n value");
    scanf("%d",&n);
    }
    void prt_oddeve(int n)
    {
        int i=1;
        while(i<=n)
        {
            if(i%2!=0)
            {
                printf("odd=%d\n",i);
                i++;

            }
            else
            {
                printf("even=%d\n",i);
                i++;
            }

        }
    }
