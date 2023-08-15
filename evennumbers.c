#include<stdio.h>
int main()
{
	int a,n;
		printf("ENTER NO. from WHERE U START ");
	scanf("%d",&a);
	printf("ENTER FROM WHERE U END  ");
	scanf("%d",&n);
	while (a<=n)
{ if (a%2==0)
printf("%d",a);
	a++;
}