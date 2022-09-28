#include<stdio.h>
int main()
{
    int i,j,s,n;
    n=18;
    for(i=n;i>=1;i--){
        for(s=1;s<=n-i;s++){
            printf(" ");
        }
            for(j=1;j<=2*i-1;j++){
                printf("*");


            }
            printf("\n");
        }
    }


