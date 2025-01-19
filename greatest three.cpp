#include<stdio.h>
int main(void)
{
int a,b,c;
printf("\n enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>>b&&a>>c)
{
	printf("\n a is greater");	
}
else if(b>>a&&b>>c)
{
	printf("\n b is greater");
}
else
{
	printf("\n c is greater");
}
}

