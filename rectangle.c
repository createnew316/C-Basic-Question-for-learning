//Write a program to calculate perimeter of rectangle.
//Take sides a,& b form the user
#include<stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);

    scanf("%d",&b);
    
    printf("Rectangle a side of %d\n",a);

    
    printf("Rectangle b side of %d\n",b);

    float p=(a+b)/2;
    printf("Perameter of Rectangle %f",p);
}