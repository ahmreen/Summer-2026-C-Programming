#include<stdio.h>

int main(){
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter marks(out of 100) for these students:");
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 0 ; i < n ; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }

    int sum = 0;

    for(int i = 0; i < n ;i++){
        sum += arr[i];
    }
  
    printf("Highest Marks:%d\n",largest);
    printf("Lowest Marks:%d\n",smallest);
    printf("Average:%.2f\n",(float)sum/n);

    for(int i = 0;i<n;i++){
        if(arr[i]>45){
            printf("Student %d: Pass\n",i+1);
        }else{
            printf("Student %d: Fail\n",i+1);
        }
    }
    return 0;
}