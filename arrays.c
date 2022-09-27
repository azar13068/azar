
#include<stdio.h>
int main()
{
int i,n,a[10000];
printf("Enter number of elements ") ;
scanf("%d", &n) ;
printf(" Enter the numbers ") ;
for(i=0;i<n;i++) {
scanf("%d", &a[i]) ;
}
int sum = a[0];

for(i=1;i<n;i++){
if(a[i]%2!=0 && a[i-1]%2==0)
continue;
else
sum+=a[i];
}
printf("%d", sum) ;
return 0;
}
