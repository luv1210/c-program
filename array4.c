#include <stdio.h>
int main (){

int arr [10] = {3,4,1,6,7,4,8,11,15,5};
int odd = 0;
int even = 0;
for(int i=0;i<10;i++){
 if(arr[i]%2==1){
   odd+=arr[i];
 }else{
	   even+=arr[i];
 }

}

printf("odd number sum,:%d",odd);
printf("even number sum,:%d",even);


return 0;
}