#include<stdio.h>
int main(){
	char a, encryp, decryp;
	int b;
	printf("Enter a number\n");
	scanf("%c",&a);
	printf("Enter any number\n");
	scanf("%d",&b);
	encryp=a^b;
	printf("The encrypted character is: %c\n",encryp);
	decryp=encryp^b;
	printf("The decrypted character is: %c\n",decryp);
	return 0;
}