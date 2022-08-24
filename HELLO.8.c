#include<stdio.h>

int main(){
int marks[]={10,20,30,40};
printf("%d",marks[0]);
for(int i=0;i<4;i++){
printf("%d\t",marks[i]);
}
    for(int i=0;i<4;i++){
        switch(marks[i]){
    case 10:{
        printf("very %dpoor\t",marks[i]);
        break;}
    case 20:{
        printf("very %dpoor\t",marks[i]);
        break;}

    case 30:{
        printf("very %dpoor\t",marks[i]);
        break;}
  default:{
        printf("very %dpoor\t",marks[i]);
        }
        }

    }

}
