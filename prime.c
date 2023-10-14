//Write a program to check if a number is prime or not.
#include<stdio.h>

int main(){
    int n,m=0,flag=0;
    scanf("%d",&n);
    printf("Enter the number. %d \n",n);

    m=n/2;
    for(int i=2;i<m;i++){
     if(n%i==0){
        printf("number is not prime.");
        flag=1;
        break;
     }
    }
    if(flag==0){
        printf("%d Number is prime number. \n");
    }
    return 0;
}