#include <stdio.h>

int main (){
  int i = 65;
  while(i<=70){
	  int j = i;
	  while(j>=65){
		  printf("%c\t",j);
	  j--; 
	  }
	  printf("\n");
	  i++;
  }
  
  
return 0;
}