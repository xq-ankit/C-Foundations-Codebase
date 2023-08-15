//count the number of element in a given array greater
//than a given number x.
#include<stdio.h>
int main(){
	int n,count=0,x;
	printf("Enter the Size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the value of x: ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
        if(arr[i]>x)
        count++;
	}
	
	printf("The Number of element grater than %d is: %d",x,count);
	return 0;
}