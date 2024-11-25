#include<stdio.h>
#include<string.h>

int main(){
char name[50];
gets (name);

int i=0;
int length;
while(name[i]!='\0')
{
    i++;
} 
length=i;
 printf("%d",i);
 for(i=length;i>=0;i--){
    printf("%c",name[i]);
 }
 
 
 
 return 0;
}