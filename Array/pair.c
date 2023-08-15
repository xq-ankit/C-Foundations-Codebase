//Find the total number of pais in the array whose 
//sum is equal to the given value x.
#include<stdio.h>
int main(){
	int n,x;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the Element X: ");
	scanf("%d",&x);
	int arr[n],count=0;
	printf("Enter the elements:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){ //j=i+1 so we can avoid repetation of the pairs.
				if(arr[i]+arr[j]==x){
					count++;
					printf("{%d,%d} ",arr[i],arr[j]);
				}
		}	
	}
	printf("\nThe total number of pairs are : %d",count);
	return 0;
}
	