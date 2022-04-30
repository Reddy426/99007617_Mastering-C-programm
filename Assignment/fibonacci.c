#include<stdio.h>
int fibonacci(int n)
{
    int num, sum=0;
    int a=0, b=1;
    for(int i=0;i<n-1;i++)
    {
        sum=a;
        num=sum+b;
        a=b;
        b=num;
    }
    return a;
}
int foo(int n)//function to check given integer is positive or not
{
    int res;
    if(n<=0)
    {
    printf("Negative input is not allowed\n");
    }
    else
    {
    res=fibonacci(n);
    printf("Nth term of fibonacci sequence is: %d\n",res);
    }
}


int main()
{
    int n;
    printf("enter a range\n");
    if(scanf("%i", &n) != 1)//check weather the entered value is integer or not
    {
        printf("Not an integer Input\n");
    }
    else{
        foo(n);
    }
}