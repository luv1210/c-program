#include<stdio.h>
int fibonassi(int n){
    if(n==1||n==0){
        return 1;
     }else{
        return fibonassi(n-1)+fibonassi(n-2);

     }
}

int main(){
 int n;
 printf("enter the value of n:");
 scanf("%d",&n);
 
 for(int i=0;i<n;i++){
    int total=fibonassi(i);

    printf("%d ",total);
 }
}