#include<stdio.h>
main()
{
    char sing_ch;
    printf("enter any character\n");
    scanf("%c",&sing_ch);
    if((sing_ch>='a' && sing_ch<='z') || (sing_ch>='A' && sing_ch<='Z'))
    {
        printf("it is a character\n");
    }
    else if(sing_ch>='0' && sing_ch<='9')
    {
        printf("it is a number\n");
    }
    else
    {
        printf("it is a special character\n");
    }

}
