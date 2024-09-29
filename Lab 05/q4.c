#include<stdio.h>
int main() {
	int age, citizen=0;

	printf("enter age\n");
	scanf("%d",&age); 
	printf("enter 1 if citizen and 0 if not a citizen\n");
	scanf("%d",&citizen);

	if ((age>=18) && (citizen==1)){
		printf("you are eligible to vote\n");
	}else {
		printf("you are not eligible to vote\n");
	}
	return 0;
}