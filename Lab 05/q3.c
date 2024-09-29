#include<stdio.h>
int main(){
	int n=0;
	printf("enter a number\n");
	scanf("%d",&n);
	if ((n%5==0) && (n%3==0)){
		printf("is divisible by both 3 and 5");
	}else{
		 printf("is not divisible by both 3 and 5");
	}
	return 0;
}