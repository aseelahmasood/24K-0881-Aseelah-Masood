#include <stdio.h>
	int main() {
	char chara;
	printf("Enter a character \n");
	scanf ("%c",&chara);
	
	if (((chara >= 33) && (chara <= 47)) || ((chara >= 58) && (chara <=64)) || ((chara >= 91) && (chara <= 96)) || ((chara >= 123) && (chara <= 126))){
		printf("The character entered is a special character.");
	}else if ((chara >=48) && (chara <= 57)){
		printf("The character entered is a number.");
	}else if ((chara >= 65) && (chara <= 90)){
		printf("The character entered is a capital letter.");
	}else if ((chara >= 97) && (chara <= 122)){
		printf("The character entered is a lowercase letter.");
	}
	return 0;
	}
	