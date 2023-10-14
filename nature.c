//Write a program to check if the given number is a
//natural number.
//(Natural numbers start from 1)

//Natural numbers are all positive integers from 1 to infinity. They are also called counting 
//numbers as they are used to count objects. Natural numbers do not include 0 or negative numbers.
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("Enter the number %d  \n",n);

    if(n>=1){
        printf("Given number is natural number...");
    }else{
        printf("Not natural number...");
    }
    return 0;
}

