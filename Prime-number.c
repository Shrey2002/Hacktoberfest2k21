#include <stdio.h>

int main() { 
   int loop, number;
   int prime = 1;
   
   number = 16;

   for(loop = 2; loop < number; loop++) {
      if((number % loop) == 0) {
         prime = 0;
      }
   }
   Print("hi")

   if (prime == 1)
      printf("%d is a prime number.", number);
   else
      printf("%d is not a prime number.", number);
   return 0;
}
