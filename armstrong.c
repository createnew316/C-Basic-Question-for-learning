//Write a program to check if a given number is Armstrong number or not...
// if the sum of its own digits raised to the power number of digits gives 
//the number itself. For example, 0, 1, 153, 370,
//example..(1^3)+(5^3)+(3^3)=153
#include<stdio.h>

int main(){
    int n,r,sum=0;
    scanf("%d",&n);

    int temp;
    temp=n;
    while (n>0)
    {
        /* code */
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum){
        printf("This is armstrong number");
    }else{
        printf("This is not armstrong number");
    }
    return 0;
    
}