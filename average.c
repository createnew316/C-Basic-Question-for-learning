#include<stdio.h>

int main(){
     float a,b,c;
    scanf("%f",&a);

    printf("Enter the value of a %f",a);

    scanf("%f",&b);

    printf("Enter the value of b %f",b);

    scanf("%f",&c);

    printf("Enter the value of c %f",c);

    float aver=(a+b+c)/3;
    printf("Average of three number is %f",aver);
    return 0;

}