#include<stdio.h>>
int main()
{
    int arr[3][3]={
    {
        10,20,30
    },
    {
        100,200,300
    },
    {
        1000,2000,3000
    }


    };

    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",arr[i][j]);

    }
    printf("\n");
    }
}
