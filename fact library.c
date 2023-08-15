#include<stdio.h>
#incude<i.h>
int factorial (int g)
{
	int fact=1;
	
	for (int i=1;i<=g;i++)
	{
		fact=fact*i;
}
	printf("%d",fact);
}
int factorial(int a,int b)
{
	return a+b;
}
int main()
{
	int n=5;
factorial(n,5);
}
/**
int factorial(int n)
{
int prod=1;
for(int i=1;i<=n;i++)
prod=prod*i;
return prod;
}
int main()
{
int n;
scanf("%d",&n);
printf(factorial(n));
}
**/