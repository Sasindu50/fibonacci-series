#include <stdio.h>
#include <stdlib.h>

int main()
{
   
   int i,n;
   
   printf("Enter how long fibonacci series that you want : ");
   scanf("%d",&n);
   
   int fib[n];

   fib[0] = 0;
   fib[1] = 1;

   for(i=2; i<n; i++)
   {
       printf("Enter number %d : ",i-1);
       scanf("%d",&fib[1]);
   }

   for(i=0; i<n; i++)
   {
       fib[i+2] = fib[i] + fib[i+1];
   }

   for(i=0; i<n; i++)
   {
       printf("%d\t",fib[i]);
   }

   //fibonacci-serise
   //comment 2
   //comment 3

}
