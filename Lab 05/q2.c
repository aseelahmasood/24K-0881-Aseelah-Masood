#include <stdio.h>
int main() {
	int n=0;
	printf("enter number");
	scanf("%d",&n);
	
	if(n<=0){
		if(n<0){
			printf("negative");
		}else {
			printf("zero");
		}
	}else {
		if(n%2==0){
			printf("positive and even");
		}else{
			printf("positive and odd");
		}
	}
	return 0;
}