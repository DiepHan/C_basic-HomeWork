#include<stdio.h>
void main()
{
    int giay;
    printf("Nhap so giay:");
    scanf("%d",&giay);
    printf("%d gio %d phut %d giay",(giay/3600),((giay%3600)/60),((giay%3600)%60));
}
