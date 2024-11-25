#include<stdio.h>
int main(){
int i=1;
while(i<=5){
int j=5;
while(j>=i){
printf(" ");
j--;
}
int k=1;
while(k<=i){
	printf("* ");
	k++;
}
i++;
printf("\n");
}

return 0;
}