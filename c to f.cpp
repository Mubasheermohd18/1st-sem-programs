#include<stdio.h>
int main()
{
	float cel,far;
	printf("\n enter the temperature in celsius:");
	scanf("%f",&cel);
	far=(9*(cel+32))/5;
	printf("\n enter your temperature in fahrenheit:");
	scanf("%f",&far);
	cel=(5/9)*far-32;
	printf("\n temperature in farhenhiet :%.2f",far);
	printf("\n temperature in celsius :%.2f",cel);
	return 0;
}
