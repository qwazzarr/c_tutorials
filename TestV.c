#include <stdio.h>
void print_factors (int x)
{
   printf("Number of factors:");
   int divisor = 2;
   while (x!=1)
   {
      if (x%divisor == 0)
      {
         printf("%d ",divisor);
         x/= divisor;
      }
      else
      {
         divisor+=1;
      }
   }
   printf("\n");
}
int main()
{
   int x  ; 
   printf("Enter number to factorize:");
   scanf("%d",&x);
   print_factors(x);
   return 0;
}