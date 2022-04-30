#include<stdio.h>
int main()
{
    int k=0,a=0,len=0;
    char str[1000];
    printf("Enter the string : \n");
    scanf("%s",&str);
    char *ptr,*ptr1;
    ptr = str;
    ptr1 = str;
    char *str1 = str;
    while(*ptr!='\0')
    {
        len++;
        ptr++;
    }
    printf("Enter the position by which you have to rotate: \n");
    scanf("%d",&k);
    while(a<len)
    {
        *ptr++ = *ptr1++;
        str[a]='\0';
        str1++;
        a++;
    }
    str1++;
    *ptr='\0';
    printf("Updated string : %s\n",str1);
    return 0;
}

