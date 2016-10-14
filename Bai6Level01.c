#include<stdio.h>
void main()
{
    float r,h;
    printf("Nhap ban kinh r và chieu cao h:");
    scanf("%f%f",&r,&h);
    printf("Dien thich xung quanh cua hinh tru tron:%0.2f\n",2*3.14*r*h);
    printf("Dien tich toan phan hinh tru tron:%0.2f\n",(2*3.14*r*h)+(2*3.14*r*r));
    printf("The tich hinh tru tron:%0.2f",3.14*r*r*h);
}
