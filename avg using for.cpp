#include<stdio.h>
int main(void){
	int x[100],sum=0;
	int n,i;
	float avg;
	printf("\n enter no of students:");
	scanf("%d",&n);
	printf("\nenter %d students marks:",n);
		for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		sum=sum+x[i];
		}
	avg=sum/n;
	printf("\n the average of students=%.2f",avg);
	
	}
	

