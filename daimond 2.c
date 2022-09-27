#include<stdio.h>
#include<conio.h>
void main()
{


 int n, c, k, space;
 printf("Enter number of rows\n");
scanf("%d", &n);
space=1;
for(k=1;k<=n-1;k++)
{

    for(space=1;space<=n-k;space++)
printf(" ");

for(c=1;c<=2*(n-k)-1;c++)
    printf("*");


printf("\n");
}
 getch();

}
