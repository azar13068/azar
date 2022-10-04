#include<stdio.h>
int main()
{

    char ch;
    char a[20][20];
    printf("enter i orI");

    scanf("%c",&ch);


    printf("\n\n\n");
    int i,j,k;
    switch(ch)
    {
    case 'I':
        for(i=0;i<8;i++)
            if(i==0||i==7)
        {

        for(j=0;j<11;j++)
            printf("\x03");
        printf("\n");
        }
        else{
            printf("   \x03\n");

        }
    }
    printf("\n\n\n");

case 'U':
        for(i=0;i<8;i++){
            if(i!=7)
                printf("\x03   \n");
            else{
                for(j=0;j<11;j++)
                    printf("\x03");

            }
            printf("\n");
        }
        }

