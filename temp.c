//Write a function to print "Hot" or "Cold" depending on the temperature user enters.

#include<stdio.h>

void temperature(int T);

int main(){
    int T;
    printf("Enter the temperature");
    scanf("%d",&T);

     temperature(T);
    return 0;
}

void temperature(int T){
    if(T>=27){
       printf("It is cold");
    }
    else{
        printf("It is hot");
    }
}