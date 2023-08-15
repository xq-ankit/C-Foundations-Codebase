//given an array of integer,change the value of all
//odd indexed elements to its second multiple and 
//increment all even indexed value by 10.
#include<stdio.h>
int main(){
int n;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the elements:\n");
int arr[n];
for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(i%2!=0)
		arr[i]*=2;
		else
		arr[i]+=10;
	}
	printf("The new array after modifying as directed is:\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
