#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int a[n];

	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
int max;
max=a[0];
for (int i=0;i<n;i++)
{
	if (a[i]>max)
	max=a[i];
}
printf("MAXIMUM NUMBER IS = %d\n",max);
system("PAUSE");
}