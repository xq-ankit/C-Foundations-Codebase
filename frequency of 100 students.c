// wacp to take input of marks of 100 students and find the frequency of each marks scored by the students greater than 60?
#include<stdio.h>
int main ()
{
	int n,frequency[40]={0};
	printf("ENTER THE SIZE OF AN ARRAY ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf("ENTER THE ELEMENT: ");
		scanf("%d",&a[i]);
	}