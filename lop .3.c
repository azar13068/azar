#include<stdio.h>
int main()
{
       //=<> in if loop
    int n1,n2;
    printf("the enter value");
    scanf("%d%d",&n1,&n2);
        if(n1==n2){
            printf("the frist value %d=%d",n1,n2);
        }
        else if(n1<n2){
        printf("the second value %d<%d",n1,n2);
        }
        else{


printf("the third value...:%d>%d",n1,n2);
}
}
