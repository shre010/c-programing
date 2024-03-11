#include<stdio.h>
int main()
{
    char str[10000],rev[10000];
    int i,j,count=0;
    scanf("%s",str);
    printf("\string before string\n");
    while (str[count]!='\0')
    {
        count++;
    }
    j=count-1;

    for(i=0;i<count;i++)
    {
        rev[i]=str[j];
        j--;
    }
    printf("string after reversing %s\n",rev);


}
