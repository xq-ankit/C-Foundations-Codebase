#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf(" %d",&n);
    int arr[n];
    int max=INT_MIN;
    printf("Enter the elements in the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
        }
        }
printf("The maximun numbers among the given array is: %d\n",max);
    
    return 0;
}
