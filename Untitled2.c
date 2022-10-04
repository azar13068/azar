#include <stdio.h>
#include <conio.h>
void main()
{
 int n, c, k, space = 1;

 printf("Enter number of rows\n");

 scanf("%d", &n);



 for (k = 1; k <= n; k++)
 {
 for (space= 1; space <= n-k; space++)
 printf(" ");



 for (c = 1; c <= 2*k-1; c++)
 printf("*");

 printf("\n");
 }
 }
