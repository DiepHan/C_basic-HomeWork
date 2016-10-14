#include<stdio.h>
void main()
{
    int ngay;
    printf("Nhap so ngay:");
    scanf("%d",&ngay);
    printf("%d nam %d thang %d ngay",(ngay/365),((ngay%365)/30),((ngay%365)%30));
}
