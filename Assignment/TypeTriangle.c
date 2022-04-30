#include<stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter the sides of triangle= ");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1 == s2 && s2 == s3)
        printf("The triangle is Equilateral\n");
    else if(s1 == s2 || s2 == s3 || s3 == s1)
        printf("The triangle is Isosceles\n");
    else
        printf("The Triangle is Scalene\n");
    return 0;
}