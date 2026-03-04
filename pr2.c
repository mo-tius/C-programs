#include<stdio.h>
#include<conio.h>
int main(){
    int r;
    float pi,area,volume;
    
    pi=3.14;
    r=3;
    area=4*pi*r*r;
    volume=4/3*pi*r*r;

    printf("Your sphere area is = %f\n",area);
    printf("Your sphere volume is = %f",volume);
    
return 0;
}