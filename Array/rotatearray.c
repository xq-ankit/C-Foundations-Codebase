//Rotate a given array by k steps 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the element: ");
    scanf("%d",&n);
    int arr[n],r,k;
    printf("Enter the array:\n");
    for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}    printf("Enter the number of rotation: ");
    scanf("%d",&k);
    if(k>n)
    k=k%n;
    printf("Array before rotation\n");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    int temp=arr[0];
for(int i=0;i<k;i++){
  arr[i]=arr[k-1-i];  
}
arr[k-1]=temp;
printf("\nArray after rotation is:\n");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}