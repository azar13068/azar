#include<stdio.h>
int main(){

//for loop 1,2,3 are postive integers
int n, count, sum = 0;
printf("enter the intrgr");
scanf("%d",&n);
for(count=1;count<=n;++count)
{
    sum+=count;

}
printf("the answer..%d",sum);
}
