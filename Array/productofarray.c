//calculate the product of all the element of a given array
#include<stdio.h>
int main(){
int n;
printf("Enter the Size of array: ");
scanf("%d",&n);
int arr[n],product=1;
printf("Enter the element of the array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
 product*=arr[i];
}
printf("The product of all the element in the array: %d",product);


    return 0;
}