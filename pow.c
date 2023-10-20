//Make your own pow function.

#include<stdio.h>
#include<math.h>

int main(){
    int base,exp;

    int result;

    printf("Enter the base value of user: ");
    scanf("%d",&base);

    printf("Enter the exp value of user: ");
    scanf("%d",&exp);

    result=pow(base,exp);
    printf("%d to the power of %d is =%d",base,exp,result);
    return 0;
}