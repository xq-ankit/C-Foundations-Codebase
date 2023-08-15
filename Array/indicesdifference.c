//find the difference between the sum of elements at even indices
//to the sum of elements at odd indices.
#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n],sumeven=0,sumodd=0;
	printf("Enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(i%2!=0)
		sumodd+=arr[i];
		else
		sumeven+=arr[i];
		
	}
	printf("The difference is :%d",sumeven-sumodd);
	return 0;
	
}