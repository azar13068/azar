
#include<stdio.h>
int main()
{
    int lv, uv;
    char c;
    printf("ENTER THE ALPHAPET");;
    scanf("%c",&c);
     lv=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
      uv=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
      if(lv||uv)
      {
          printf("this is alphapet");

      }
      else{
        printf("it constant");
      }


}
