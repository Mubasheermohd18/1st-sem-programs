#include<stdio.h>
#include<conio.h>
int main(void)
{
	int x1,y1,x2,y2;
	float m;
		printf("\n Enter the co ordinates of the line (x1,y1): ");
		scanf("%d%d",&x1,&y1);
		printf("\n Enter the co ordinates of the line (x2,y2): ");
		scanf("%d%d",&x2,&y2);
			if(x2-x1==0)
			{
				printf("\n Undefined slope( vertical line )");
			}
			else
			{
				m=(y2-y1)/(x2-x1);
				printf("\n slope of the line: %.2f",m);
			getch();
			}
			
}
