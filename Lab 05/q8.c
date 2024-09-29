
#include <stdio.h>
 int main() {


    int count0 = 0, count1 = 0;
	int N=0;
	printf("Enter a number\n");
	scanf("%d",&N);
	
    while (N > 0) {
 
        if (N & 1) {
            count1++;
        }

        else {
            count0++;
        }
 
        N = N >> 1;
    }
 
    printf("Count of 0s in N is %d\n", count0);
    printf("Count of 1s in N is %d\n", count1);
	return 0;
}
 
