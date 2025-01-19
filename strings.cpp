#include<stdio.h>
int main(void){
	char str1[20]={'c','s','d','2'},str2[20]={"1CSD2"};
	printf("\n please enter a name:");
	scanf("%s",str1);
	gets(str1);
	puts(str1);
	printf("\n your stiring:%s",str1);
	printf("\n your stiring:%s",str2);
	printf("\n%d",str1[5]);
	
}
