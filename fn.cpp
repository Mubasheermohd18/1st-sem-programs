#include<stdio.h>
int add(int x,int y){
	return(x+y);
}
int sub(int x,int y){
	return(x-y);
}
int mul(int x,int y){
	return(x*y);
}
int div(int x,int y){
	return(x/y);
}
int calculate(int x,int y){
	char ch;
	printf("\nplease enter the operator:");
	scanf("%c",&ch);
	switch(ch){
		case '+':
			return add(x+y);
			break;
		case '-':
		    return sub(x-y);
			break;
		case '*':
		    return mul(x*y);
			break;
		case '/':
		    return div(x/y);
			break;
		default:
		    printf("\n No such Operator");
			return 0;
	}
}
int add(int x,int y){
	return(x+y);
}
int sub(int x,int y){
	return(x-y);
}
int mul(int x,int y){
	return(x*y);
}
int div(int x,int y){
	return(x/y);
}
int main(){
	int x,y,z;
	printf("\n Please enter two numbers:");
	scanf("%d%d",&x,&y);
	z=calculate(x,y);
	printf("\n ans=%d",z);
}
