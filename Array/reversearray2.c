//Reverse a array without using another array.
#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		}
		printf("Orginal Array:\n");
		for(int i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
		printf("\nreverse Array:\n");
		int temp=arr[0];
		for(int i=0;i<n;i++){
			arr[i]=arr[(n-1)-i];
			}
			arr[n-1]=temp;
			for(int j=0;j<n;j++){
				printf("%d ",arr[j]);
			
	}
return 0;
	
}