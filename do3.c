#include<stdio.h>
int main(){
int i=5;
do{
   int j=1;
do{
  printf("%d\t",i);
j++;
}while(j<=5);
printf("\n");
i--;
}while(i>=1);

return 0;
}