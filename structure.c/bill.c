#include <stdio.h>

struct bill
{
    int cus[5];
    int rate;
    int qut;
    int amt;
    int dic;
    int totalamt;
    int gst;
    int netbill;
};


int main (){
    struct bill s1[5];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter custumer:");
        scanf("%d",&s1[i].cus);
        printf("Enter ret:");
        scanf("%d",&s1[i].rate);
        printf("Enter quntity:");
        scanf("%d",&s1[i].qut);
        s1[i].amt = s1[i].rate * s1[i].qut;
        s1[i].dic = s1[i].amt * 5 / 100;
        s1[i].totalamt = s1[i].amt - s1[i].dic;
        s1[i].gst = s1[i].totalamt * 28 / 100;
        s1[i].netbill = s1[i].totalamt + s1[i].gst;
         printf("amt:%d\n",s1[i].amt);
        printf("dis:%d\n",s1[i].dic);
        printf("totalamt:%d\n",s1[i].totalamt);
       printf("GST:%d\n",s1[i].gst);
       printf("netbill:%d",s1[i].netbill);
    }
    
      


    return 0;
}