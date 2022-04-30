#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#if 0

int main(){
   char input_string[] = "192.168.7.1";
   char token[20][20];
   char* context = NULL;
   char* token = strtok_r(input_string, ".", &context);
   int num_tokens = 0; // Index to token list. We will append to the list
   while (token != NULL){
      strcpy(token_list[num_tokens], token); // Copy to token list
      num_tokens++;
      token = strtok_r(NULL, ".", &context);
   }
   // Print the list of tokens
   printf("Token List:\n");
   for (int i=0; i < num_tokens; i++) {
      printf("%s\n", token_list[i]);
    int atoi(const char token_list[i]); 
   printf("%d",token_list[i]);
   }
   return 0;
}
#endif

union iptolint
{
    char ip[16];
    long  n;
};

long  conv(char []);

int main()
{
    union iptolint ipl;
    printf("Enter any IP Address to be converted :: ");
    scanf("%s",ipl.ip);

    ipl.n=conv(ipl.ip);

    printf("\nEquivalent 32-bit long int is :: %lu \n",ipl.n);
}

long conv(char ipadr[])
{
    long num=0,val;
    int p=24;
    char *tok,*ptr;
    tok=strtok(ipadr,".");
    while( tok != NULL)
    {
        val=strtol(tok,&ptr,10);
        num+=  val * (long)pow(2,p);
        p=p-8;
        tok=strtok(NULL,".");
    }
    return(num);
}
