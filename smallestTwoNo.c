#include<stdio.h>

int main(){
    int a,b,small;
    scanf("%d",&a);
    printf("Enter first number %d \n",a);
    scanf("%d",&b);
    printf("Enter second number %d \n",b);
    if(a<b){
    small=a;
    printf("The smallest of a of two number...\n %d",small);
    }else{
        small=b;
        printf("The smallest of b of two number... %d",small);
    }
    return 0;
}