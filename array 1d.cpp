#include<stdio.h>
int main(void){
	int x[5];
	int y[5][5],i,j;
	printf("\n enter 5 numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\n no's in 1d array are.....");
	for(i=0;i<5;i++)
	{
		printf("\n");
		printf(" %d",x[i]);
	}
	printf("\n");
	printf("\n enter 9 numbers:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&y[i][j]);
		}
}
	printf("\n no's in 2d array are.........");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",y[i][j]);
		}
	}
}

	

