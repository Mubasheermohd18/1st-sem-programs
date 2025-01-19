#include<stdio.h>
struct student{
	char rollno[8];
	char name[40];
	float mark[5];
} x[64],y;
int A[100];
main(){
	int i,j;
	for (i=0;i<3;i++){
	printf("\n Please enter rollno,name,5 marks:");
	scanf("%s %s",&x[i].rollno,&x[i].name);
	for (j=0;j<5;j++)
	scanf("%f",&x[i].mark[j]);
}   
for (i=0;i<3;i++){
	printf("\n%s %s",x[i].rollno,x[i].name);
	for(j=0;j<5;j++){
	printf("%f",x[i].mark[j]);
	}
}
}
