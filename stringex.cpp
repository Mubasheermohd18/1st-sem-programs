#include<stdio.h>
#include<string.h>
int main(void){
	char str1[]="apple";
	char str2[]="aptitude!";
	printf("\n%d",strncmp(str1,str2,2));
	strncpy(str1,str2,4);
	printf("\n%s",str1);
	strncat(str1,str2,4);
	printf("\n%s",str1);
}
