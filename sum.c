//Write a function to find sum of digits of a number.
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int t=n;
    int sum=0;

    while (t !=0)
    {
        /* code */
        int remainder=t%10;
        sum=sum+remainder;
        t=t/10;
    }
    printf("sum of the digit %d=%d\n",n,sum);
    
}