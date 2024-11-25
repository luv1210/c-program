#include<stdio.h>
int main(){

int n;
printf("enter value of n");
scanf("%d",&n);

int arr[n];
int oddposition=0;
int evenposition=0;
for(int i=0;i<n;i++){
printf("enter number");
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
if(i%2==0){
oddposition+=arr[i];
}else{
evenposition+=arr[i];
}
}
printf("oddposition sum=%d\t\n",oddposition);
printf("evenposition sum=%d\t",evenposition);

return 0;
}