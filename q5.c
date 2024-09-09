#include<stdio.h>
int main() {
	int p_amount,time;
	float rate, simple_interest;
	
	printf("enter principal amount between Rs.100-1000000 \n");
	scanf("%d", &p_amount);
	
	printf("enter interest rate between 0.05-0.1 \n");
	scanf("%f", &rate);
	
	printf(enter time period between 1-10 years \n");
	scanf("%d", &time);
	
	simple_interest= p_amount *rate*time;
	printf("simple interest: %.2f", simple_interest);
	
}
	