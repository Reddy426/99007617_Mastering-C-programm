#include <stdio.h>
void generic_swap(void *a,void *b, int x)
{
char temp;
char *aa =(char*)a;
char *bb =(char*)b;
 for(int i=0; i<x; i++)
  {
   temp = aa[i];
   aa[i]=bb[i];
   bb[i]= temp;
  }
}
int main()
{
  int a=10, b=20;
  char c='A', d='B';
  float e= 1.23, f=3.26;
  int a1[2]={2,3} , a2[2]={4,5} ;
  generic_swap(&a, &b, sizeof(a));
  printf("%d %d\n", a, b);
  generic_swap(&c, &d, sizeof(c));
  printf("%c %c\n", c, d);
  generic_swap(&e, &f, sizeof(e));
  printf("%f %f\n", e, f);
  generic_swap(&a1, &a2, sizeof(a1));
  for(int i=0;i<2;i++)
  printf("a1=%d a2=%d\n", a1[i],a2[i] );
}















  /*for(int i=0; i<2; i++)
  {
  generic_swap(&a1[i], &a2[i], sizeof(a1));
  }
  for(int i=0; i<2; i++)
  {
  printf("%d %d\n", a1[i], a2[i]);
  }*/