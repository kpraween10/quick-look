#include <stdio.h>
 
int main () {

   /* local variable definition */
   int num1 = 100;
   int num2 = 200;


   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   printf("max : %d\n",result);
   return 0;
}