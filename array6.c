#include <stdio.h>
int main (){

int arr1 [3][3];
int arr2 [3][3];
 int totalarr1=0;
 int totalarr2=0;
 int total;
for(int i=0;i<3;i++){
	for(int j =0;j<3;j++){
	printf("Enter element %d andf %d",i,j);
	  scanf("%d",&arr1[i][j]);
	}
	printf("\n");
}
for(int i=0;i<3;i++){
	for(int j =0;j<3;j++){
	printf("Enter element %d andf %d",i,j);
	  scanf("%d",&arr2[i][j]);
	}
	printf("\n");
}

for(int i = 0;i<3;i++){
	for(int j =0;j<3;j++){
		
	totalarr1 +=arr1[i][j];
    totalarr2 +=arr2[i][j];
	}
	
}
total = totalarr1 +totalarr1;
printf("%d",total);
return 0;
}