#include <stdio.h>
int main (){

int arr [10] = {3,4,1,6,7,4,8,11,15,5};
int total = 0;
for(int i=0;i<10;i++){
total+=arr[i];
}
printf("number of sum;%d",total);
return 0;
}