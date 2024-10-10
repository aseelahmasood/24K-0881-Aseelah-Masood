#include<stdio.h>
int main(){
	int n;
	int t1=0;
	int t2=1;
	int next_term=t1+t2;
	//printf("%d , %d, ",t1,t2);
	
	for(int i=3;i<9;i++){
		printf("%d, ",next_term);
		t1=t2;
		t2=next_term;
		next_term=t1+t2;
	}
	return 0;
}
	