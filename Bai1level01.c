#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c;
    printf("Nhap cac canh a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b<=c)||(b+c<=a)||(a+c<=b))
        printf("NHAP SAI");
    else{
    printf("Chu vi tam giac la:%0.2f\n",a+b+c);
    printf("Dien tich tam giac la:%0.2f",((sqrt)((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4));}

}
