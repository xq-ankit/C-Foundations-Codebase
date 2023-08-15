#include<stdio.h>
int main ()
{
	int n,even=0,odd=0;
	scanf("%d",&n);
	int a[n];

	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
}
int arreven[n];
int arrodd[n];
for (int i=0;i<n;i++)
{
	if (a[i]%2==0)
	arreven[even++]=a[i];
	else 
	arrodd[odd++]=a[i];
	
}
for (int i=0;i<even;i++)
{if (arreven[i]!=0)
	printf("    %d",arreven[i]);
}
for (int i=0;i<odd;i++)
{if (arrodd[i]!=0)
	printf(" \n  %d",arrodd[i]);
}
}