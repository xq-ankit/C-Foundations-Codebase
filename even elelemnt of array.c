#include<stdio.h>
int main ()
{
	int n;
	printf("DECLARE THE SIZE OF AN ARRAY ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf("ENTER THE %d ELEMENT ",i+1);
		scanf("%d",&a[i]);
	}
		for (int i=0;i<n;i++)
	{
        if (a[i]%2==0)
        printf("%d\t",a[i]);


}
	
}