//WAP using functions to find the sum and average of 10 marks
#include<stdio.h>
void calculate(int marks[],int n){
int sum=0,i;
float avg;
	for(i=0;i<n;i++)
	sum+=marks[i];
	avg=(float)sum/n;
	printf("\n sum=%d,avg=%.2f",sum,avg);
}
main(){
	int marks[10],n,i;
	printf("\nhow many numbers:");
	scanf("%d",&n);
	printf("\n please enter the %d numbers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&marks[i]);
	calculate(marks,n);
}
	

