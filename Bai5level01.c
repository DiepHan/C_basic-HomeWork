#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d;
    printf("Nhap 4 canh day lon, day be, 2 canh ben:");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    if(a<=b) printf("NHAP SAI");
    else{
    printf("Chu vi hinh thang:%0.2f\n",a+b+c+d);
    printf("Dien tich hinh thang:%0.2f",(a+b)*(sqrt((2*(c*c*d*d+c*c*(a-b)*(a-b)+d*d*(a-b)*(a-b)))-(c*c*c*c+d*d*d*d+(a-b)*(a-b)*(a-b)*(a-b))))/(4*(a-b)));}

}
