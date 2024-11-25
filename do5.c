#include<stdio.h>
int main(){
int i=65;
do{
   int j=1;
do{
  printf("%c\t",i);
j++;
}while(j<=5);
printf("\n");
i++;
}while(i<=69);

return 0;
}