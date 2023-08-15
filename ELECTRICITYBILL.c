//WRITE A C PROGRAMMING FOR FINDING THE ELECTRICITY BILL...
#include<stdio.h>
int main()
{
	int unit;
	float amount, total_amt,fixedcharge;
	printf("ENTER TOTAL UNITS CONSUMED: ");
	scanf("%d",&unit);
	if (unit<=50)
	{
	amount=unit*0.5;
	}
	else if (unit<=150)
	{
		amount= 25+((unit-50)*0.75);
		
	}
	else if (unit <= 250)
	{
	 amount = 100+((unit-150)*1.20);
	}
	else 
	{
		amount= 220+((unit-250)*1.50);
	}
	fixedcharge=amount*.20;
	total_amt=amount+fixedcharge;
	printf("ELECTRICITY BILL= Rs. %f",total_amt);
	return 0;
	}