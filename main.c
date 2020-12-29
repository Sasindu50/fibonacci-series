#include <stdio.h>
#include <stdlib.h>

int main()
{
   int fib[10];
   int i;

   fib[0] = 0;
   fib[1] = 1;

   for(i=2; i<10; i++)
   {
       printf("Enter number %d : ",i-1);
       scanf("%d",&fib[1]);
   }

   for(i=0; i<10; i++)
   {
       fib[i+2] = fib[i] + fib[i+1];
   }

   for(i=0; i<5; i++)
   {
       printf("%d\t",fib[i]);
   }

}
