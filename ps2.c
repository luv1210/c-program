#include<stdio.h>
#include<string.h>
int main (){
    char arr[] = "HELLO";

    for (int i = 0;i<5;i++) {
        for (int j=0;j<=i;j++) {
            printf("%c", arr[j]);
        }
        printf("\n");
    }

    return 0;
}