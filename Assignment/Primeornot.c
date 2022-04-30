#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : \n");
    scanf("%d",&n);

    int cnt=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        cnt++;
    }
    if(cnt!=0)
    {
        printf("Not a prime number\n");
    }
    else{
        printf("Prime number\n");
    }
    return 0;
}