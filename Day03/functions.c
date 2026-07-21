#include<stdio.h>

int factorial(int a){
    if(a == 0 || a == 1){
        return 1;
    }else{
        return a * factorial(a-1);
    }
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num < 0){
        printf("Not an eligible case.");
    }else{
      printf("Factorial of %d : %d",num,factorial(num));
    }
    return 0;
}