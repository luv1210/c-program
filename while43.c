#include <stdio.h>
int main (){
 
  int i = 1;
  while (i<=9){
	  if(i<=5){
	  int j = 1;
	  while(j<=i){
		  printf(" ");
		  j++;
	  }
	  int k = 5;
	  while(k>=i){
		  printf("* ");
		  k--;
	  }
	  } else{
		 int j =9 ;
	  while(j>=i){
		  printf(" ");
		  j--;
	  }
    int k = 5;
	  while(k<=i){
		  printf("* ");
		  k++;
	  }	  
	  }
	  i++;
	  printf("\n");
  }
return 0;
}