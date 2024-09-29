#include<stdio.h>
int main() {
	int n1,n2=0;
	printf("enter two numbers\n");
	scanf("%d%d",&n1,&n2);

	n1>n2? printf("%d is greater than %d",n1,n2) : printf("%d is greater than %d",n2,n1);

	return 0;
}