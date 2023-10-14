//a. Search on what a "nested loop" is & print this
//pattern using it.

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf(" arr of length %d \n",n);

    int m;
    scanf("%d",&m);
    printf(" arr of length %d \n",m);

      
    int arr[n][m];
    for(int i=0;i<n;i++){
        for (int j = 0; j <m; j++)
        {
            /* code */printf("*");
        }
        printf("\n");
    }
    return 0;
}