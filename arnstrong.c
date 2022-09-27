#include<stdio.h>
int main()
{
    int n,r,n1,sum;
    printf("enterr the numbwr");
    scanf("%d" ,&n);
    n1=n;
    sum=0;
    while(n!= 0)
    {
        r=n/10;
        sum =sum +r*r*r;
        n=n/10;
            }
if(sum==n)
    printf("%d the amrb ");
else
    printf("%d not  amrj");
}
