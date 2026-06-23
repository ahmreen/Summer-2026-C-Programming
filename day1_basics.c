#include<stdio.h>

int main(){
    int n;
    printf("Enter number to get sum of first n terms:");
    scanf("%d",&n);
    int sum = 0;
    for(int i = 1;i <= n ;i++){
        sum += i;
    }
    printf("%d is sum of first %d terms.",sum,n);
    return 0;
}