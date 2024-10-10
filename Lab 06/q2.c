#include<stdio.h>
int main(){
	int i, num;
	printf("Enter a number\n");
	scanf("%d",&num);
	for(i=0;num>0;num=num/10){
		i++;
	}
	if(i>1){
		printf("Number is a multiple digit number");
	}else{
		printf("Number is not a multiple digit number");
	}
	return 0;
}
		
		
		
		