#include<stdio.h>
int main(){
int n=11;
int i=1;
do{
   int j=1;
do{

  printf("%d\t",n);
n=n+1;
j++;
}while(j<=5);
printf("\n");
n=n+5;
i++;
}while(i<=5);

return 0;
}