#include<stdio.h>
int main ()
{
	int r;
	printf("number of rows ");
	scanf("%d",&r);

	int a[r];
	for (int i=0;i<r;i++)
	{
		
		scanf("%d",&a[i]);
	}
	int k=60;
int b[45]={0};
for (int i=0;i<r;i++)
{
	b[a[i]-60]++;
}
for (int i=0;i<45;i++)
{
	if (b[i]==0)k++;
	else {
	
		printf("%d %d\n",k,b[i]);k++;
	}
}


	
}
