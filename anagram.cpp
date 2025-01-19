#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
	printf("\n enter 1st string:");
	gets(str1);
	printf("\n enter 2nd string:");
	gets(str2);
	qsort(str1);
	qsort(str2);
	strcmp(str1,str2);
	if(strcmp(str1,str2)==0){
		printf("\n it is a anagram");
		
	}
	else{
		printf("\n it is not a anagram");
	}
}
