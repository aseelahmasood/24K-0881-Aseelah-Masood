#include<stdio.h>
int main() {
	int n=0;
	printf("enter a number\n");
	scanf("%d",&n);
	
	
	n<0?   printf("number is negative"): n==0? printf("number is zero"):printf("number is positive");
	return 0;
}