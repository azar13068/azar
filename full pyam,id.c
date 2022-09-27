#include<stdio.h>
int main()

{
    int i,rows,j,k=0,count=0,count1=0;
     printf("the kk");
     scanf("%d",&rows);
     for(i=1;i<=rows;++i)
     {
        for(j=1;j<=rows-i;++j){
                printf("");
            ++count;
        }
        while(k!=2*i-1){
            if (count <=rows-1){
                printf("%d",i+k);
            ++count;

        }else{
        ++count1;
        printf("%d",(i+k-2*count1));
        }
        ++k;
     }
     count1=count=k=0;
     printf("\n");
}
}
