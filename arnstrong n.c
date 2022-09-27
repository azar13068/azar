#include<stdio.h>
#include<math.h>
int main()
{

    int num,n1,r,n=0;
    float sum=0.0;
    printf("enter the armstrong number");
    scanf("%d",&n);
    n1= num;
    for(n1=num;n1>0;++n){
        n1/=10;
    }

    for(n1=num;n1>0;n1/=0)
{

r=n1%10;
sum+=pow(r,n);
}
if((int) sum==num)
    printf("%d is the amfr",num);
else
    printf("%d is the no smrddsk",num);
}
