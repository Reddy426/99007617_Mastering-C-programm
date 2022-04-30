#include<stdio.h>
#include<string.h>
int main()
{
  char ch[30];
  int l,i,j,count=0;
  printf("Enter the string: ");
  scanf("%s",ch);
  l=strlen(ch);
  for(i=0;i<=l-1;i++)
  {
    for(j=i+1;j<=l;j++)
    {
    if(ch[i]==ch[j])
    {
       count=1;
    }
  }
  }
   if(count==1)
   {
      printf("Isogram\n");
   }
      else
      {
      printf("Not Isogram\n");
      }
  return 0;
}