#include <stdio.h>
//set the kth bit of n
int setBit(unsigned int n,unsigned int k)
{
   n = n | (1 << k );
    return n;
}

//clear the kth bit of n
int clearBit(unsigned int n,unsigned int k)
{
	n = n & (~(1 << k));
    return n;
}
// Get bit
int GetBit(unsigned int n,unsigned int k)
{
        n = n & (1 << k);
    return n;
}

//toggle the kth bit of n
int toggleBit(unsigned int n,unsigned int k)
{
int i=4;
while (i)
{
   n = n ^ (1 <<k);
 printf("%X\n",n);
 i--;
sleep(2);

 }
   return n ;
}
int main()
{
 unsigned int n;
 unsigned int k;
scanf("%X",&n);
scanf("%X",&k); 
    printf("Set bit = %X\n", setBit(n,k));
    printf("bit Cleared: %X\n", clearBit(n,k));
    printf("Get bit : %X \n",GetBit(n,k));
    printf("bit Toggled: %X\n", toggleBit(n,k));
    return 0;
}
