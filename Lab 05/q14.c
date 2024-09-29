#include<stdio.h>
int main(){
	int age,income,credit_score=0;
	printf("Enter age");
	scanf("%d",&age);
	printf("Enter income");
	scanf("%d",&income);
	printf("Enter credit score");
	scanf("%d",&credit_score);
	
	if((age>=18)&&(income>100000)&&(credit_score>=50)){
		printf("You are eligible for loan");
	}else{
		printf("You are not eligible for loan");
	}
	return 0;
}
	