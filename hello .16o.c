#include<stdio.h>
int main(){

   int dividend ,divisor, quotient,remainder;
   printf("enter the dividend..");
 scanf("%d", &dividend);
 printf("enter divisor");
 scanf("%d",&divisor);
  quotient=dividend/divisor;
  remainder=dividend%divisor;
  printf("quotient=%d\n",quotient);
  printf("remaimder=%d",remainder);
}
