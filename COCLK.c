#include<stdio.h>
#include<conio.h>
int main()
{

    int h,m,s,i;
    int d=1000;

    printf("set the time \n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>24 ||m>60 ||s>60)
    {

        printf("error!..\n");
        exit(0);

    }

    start:
    for(h;h<24;h++)
    {
        for(m;m<60;m++)
        {
            for(s;s<60;s++)
            {
        printf("\n\n\n\t\t\t%d:%d:%d",h,m,s);
                if(h<12)
                    printf("am");
                else
                    printf("pm");
                    for(double i=0;i<3619999;i++)
                        i++;
                        i--;

            }
            s=0;
        }
        m=0;
    }
    h=0;
    goto start;
getch();
}
