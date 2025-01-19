#include<stdio.h>
int main(void){
	int x[100];
	int n,i,min,max;
	printf("\n enter how many numbers:");
	scanf("%d",&n);
	printf("\nenter %d numbers :",n);
		for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		}
			max=x[0];
			min=x[0];
			for(i=0;i<n;i++)
			{
				if(min>x[i])
					min=x[i];
				if(max<x[i])
					max=x[i];
			}
printf("\n min=%d,max=%d",min,max);
}

	

