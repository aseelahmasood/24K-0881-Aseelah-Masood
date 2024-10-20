#include<stdio.h>
int main(){
	int size,sum=0;
	printf("Enter size of array\n");
	scanf("%d",&size);
	int arr[size];
	
	for (int i=0;i<(size);i++){
		printf("enter value\n");
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	
	printf("sum= %d",sum);
	return 0;
}
