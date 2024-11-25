#include<stdio.h>
int main(){
int n=65;
int i=1;
do{
   int j=1;
do{

  printf("%c\t",n);
n=n+1;
j++;
}while(j<=5);
printf("\n");
i++;
}while(i<=5);

return 0;
}