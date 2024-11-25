#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    printf("%d\n",&a);
    printf("%d\n",&b);
    int*ptr;
    ptr=&a;
    int*ptr2;
    ptr2=&b;
    printf("pointer add:%d\n",&ptr);
   printf("pointer add:%d\n",&ptr2);
    *ptr=*ptr+*ptr2;
    *ptr2=*ptr-*ptr2;
    *ptr=*ptr-*ptr2;
    printf("*ptr=%d and *ptr2=%d",*ptr,*ptr2);
    
}