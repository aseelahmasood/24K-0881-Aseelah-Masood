#include <stdio.h>
	int main() {
	int n1, n2;
	int operator;
	n1=0;
	n2=0;
	printf ("Enter two numbers \n");
	scanf ("%d%d" ,&n1,&n2);
	printf ("Enter 1 to add, 2 to subtract, 3 to multiply and 4 to divide.");
	scanf (" %d" ,&operator);

	switch (operator) {
	case 1:
		printf("n1+n2=%d is the result \n",n1+n2);
		break;
	case 2:
		printf("n1-n2=%d is the result \n",n1-n2);
		break;
	case 3:
		printf("n1*n2=%d is the result \n",n1*n2);
		break;
	case 4:
		printf("n1/n2=%d is the result \n", n1/n2);
		break;
	default:
		printf("invalid input");

	}
	return 0;
}