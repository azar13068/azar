#include<stdio.h>
int main()
{
    int i=32,j=4,k;
    k=j*3;
    printf("k =%d\n",k);
    k=j<<2;  //<<left side move
        //64 32 16 8 4 2 1
            // 0  0 1 0 0
         //     1 0 0 0 0 0
    printf("%d\n",k);
    k=i>>2;

    printf("%d\n",k);

}
