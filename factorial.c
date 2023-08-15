#include<stdio.h>
int main ()
{
	int a,factor=1;
	printf("%d",factor);
	printf("enter the number here ");
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
	factor=factor*i;
	printf("%d",factor);
}