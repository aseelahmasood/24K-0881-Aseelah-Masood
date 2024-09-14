#include <stdio.h>
	int main() {
	int n;
	n=0;
	printf ("Enter a number \n");
	scanf ("%d" ,&n);
	if (n%3==0){
		printf("n=%d is a multiple of 3\n",n);
	}else{
		printf("n=%d is not a multiple of 3\n",n);
	}
    return 0;
}