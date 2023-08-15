//calculate the sum of all the element in an array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n],sum=0;
    printf("Enter the Elements of the array:\n");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("The sum of all the element of the array is: %d\n",sum);
    return 0;

}