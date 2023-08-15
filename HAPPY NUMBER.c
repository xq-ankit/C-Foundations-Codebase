#include<stdio.h>
int main ()
{
	int i,sum=0,k;
	printf("ENTER THE NUMBER HERE ");
	scanf("%d",&k);
		for (i=1;i<=k/2;i++)
		{
			if (k%i==0)
			sum=sum+i;
		}
		if (sum==k)
		printf(" MAGIC NUMBER ");
		else 
		printf("NOT A MAGIC NUMBER ");
		
}