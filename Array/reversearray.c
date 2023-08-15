//Reverse a array and put the values to a another array.
#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n],rev[n];
	printf("Enter the elements in the array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		}
		printf("Orginal Array:\n");
		for(int i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
		printf("\nreverse Array:\n");
		for(int i=0;i<n;i++){
			rev[i]=arr[(n-1)-i];
			}
			for(int j=0;j<n;j++){
				printf("%d ",rev[j]);
			
	}
return 0;
	
}