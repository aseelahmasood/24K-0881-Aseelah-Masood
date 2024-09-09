#include <stdio.h>

 int main() {
	float salary,taxamount,finalsalary,taxrate;
	printf("enter tax rate and salary \n");
	scanf("%f%d", &taxrate,&salary);
	
	taxamount=taxrate*salary;
	finalsalary=salary-taxamount;
	
	printf("tax amount is: ",taxamount,"final salary is: ", finalsalary);
	return 0;
}