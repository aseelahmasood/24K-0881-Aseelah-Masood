
#include <stdio.h>
int main() {
	int age=0;
	printf("Enter age\n");
	scanf("&d", &age);
	if (age<=19){
		if(age<=13){
			printf("child");
		}else {
			printf("teenager");
		}
	}else if(age<=60){
		printf("adult");
		}else {
			printf("senior");
		}
	return 0;
}