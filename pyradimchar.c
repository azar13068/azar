#include <stdio.h>
int main() {
    char input,  alphabet='A';

printf("enter the lower case into upoper case ");
scanf("%c",&input);

for(int i=1;i<= (input-'A'+1);++i){
    for (int j=1;j<=i;++j){
        printf("%c",alphabet);

    }
++alphabet;
printf("\n");
}


}
