#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("factorial is %d",fact(n));
    return 0;
}
int fact(int n){
    if (n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}