#include<stdio.h>
int main(){
int num1[5];
int num2[5];
for(int i=0;i<5;i++){
printf("enter element num1");
scanf("%d",&num1[i]);
}
for(int i=0;i<5;i++){
printf("enter elment num2");
scanf("%d",&num2[i]);
}
printf("\n");
for(int i=0;i<5;i++){
printf("%d\t",num1[i]);
}
printf("\n");
for(int i=0;i<5;i++){
printf("%d\t",num2[i]);
}

return 0;
}