#include <stdio.h>
int main() {
   int totalrowno,space,row,symbol;
   printf("the  number of  rows=\n");
   scanf("%d",&totalrowno);
   for(row=1;row<=totalrowno;row++)
   {
       for(space=1;space<=totalrowno;space++){


        printf("");
       }

        for(symbol=1;symbol<=((2*row)-1);symbol++){


                        printf("*");
        }

   printf("\n");
}
}
