#include<stdio.h>
int power(int a, int b){
    int x = 1;
    for(int i=1;i<=b;i++){
        x=x*a;
    }
    return x;
}
int main(){
    int a, b;
    printf("enter the base: ");
    scanf("%d", &a);
    printf("enter the power: ");
    scanf("%d", &b);

    int p = power(a,b);
    printf("%d raised to the power %d is %d",a ,b, p);   
    return 0;
}