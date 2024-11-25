#include <stdio.h>
int main (){

int arr[3][3];
int uppre;
int lower;
int dimond;
for(int i =0;i<3;i++){
for(int j =0;j<3;j++){
    printf("Enter value of %d and %d:",i,j);
	scanf("%d",&arr[i][j]);
}
}

for(int i =0;i<3;i++){
for(int j =0;j<3;j++){
    printf("%d",arr[i][j]);

}
printf("\n");
}

uppre = arr[0][1]+arr[0][2]+arr[1][2];
lower = arr[1][0]+arr[2][0]+arr[2][1];
dimond = arr[0][0]+arr[1][1]+arr[2][2];

  printf("upper:%d",uppre);
  printf("lower:%d",lower);
  printf("dimond:%d",dimond);

return 0;
}