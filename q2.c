#include<stdio.h>
int main() {
	int n1,n2;
	
	printf("enter first number");
	scanf("%d", &n1);
	
	printf("enter second number");
	scanf("%d", &n2);
	
	int temp=n1;
	n1=n2;
	n2=temp;
	
	printf("after swapping: ", n1,n2);
	return 0;
	
}
	
	