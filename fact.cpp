//AP to find the factorial of a number without functions
#include<stdio.h>
int main()
{
	int n,i,ans=1;
	printf("\nplease enter a number:");
	scanf("%d",&n);
	if(n>1){
		for(i=2;i<=n;i++)
		ans=ans*i;
	}
	printf("\nfactorial of %d is %d",n,ans);
}
