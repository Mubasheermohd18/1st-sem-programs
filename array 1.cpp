#include<stdio.h>
int main(void){
	int x[5];
	int y[5][5];
	int i,j;
	printf("\n enter 5 elements:");
	for(i=0;i<5;i++){
		scanf("%d",&x[i]);
	printf("\n no in 1d array...... ");
	for(i=0;i<5;i++){
		printf("%d",x[i]);
	}
	printf("\n");
	printf("\n enter 9 numbers:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&y[i][j]);
			}
		}
	printf("\n no in 2d array......");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n%d",y[i][j]);
		}	
	}
	printf("\n");
}
}

