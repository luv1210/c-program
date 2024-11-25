#include<stdio.h>
int main(){
int i=1;
do{
   int j=1;
do{
if(i%2==0){
  printf("%d\t",i);
}
j++;
}while(j<=5);
printf("\n");
i++;
}while(i<=10);

return 0;
}