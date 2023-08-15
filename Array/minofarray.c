#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of the aarray:");
    scanf("%d",&n);
    int arr[n],min=INT_MAX;//here INT_MAX have the largest element of the range.
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(min>arr[i]){
        min=arr[i];
        }
    }
    printf("The minimum element in the given array is: %d",min);
    return 0;
    
}