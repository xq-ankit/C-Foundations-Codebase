
#include<stdio.h>
int main ()
{
	int n,c=1,sum=0;
	printf("ENTER THE NUMBER HERE ");
	scanf("%d",&n);
	
for (int i=1;i<n;i++)
{

	if (n%i==0)
sum+=i;
	
}
if  (sum==n)
printf("perfect number ");
else 
printf("NOT A PERFCT NUMBER ");
}