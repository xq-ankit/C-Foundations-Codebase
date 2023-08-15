//Find the second largest element in the array
#include<stdio.h>
#include<limits.h>
int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n],max=INT_MIN,smax=max;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>max){
		smax=max; //won't work if the first element is the largest element
		max=arr[i];
		}
		else if((smax<arr[i]) && (max!=arr[i])) //hence we check if smax is smaller than the first element we rum the max loop for smax.
		smax=arr[i];
	}
	printf("Second Maximum number in the given array is: %d",smax);
	return 0;
}