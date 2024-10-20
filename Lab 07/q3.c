#include<stdio.h>
int main(){
	int size=0;
	int min=1000;
	int max=-1;
	printf("enter size\n");
	scanf("%d",&size);
	int arr[size];
	
	for(int i=0;i<size;i++){
		 printf("enter value\n");
		 scanf("%d",&arr[i]);
		 if(arr[i]>max){
			 max=arr[i];
		 }
		 if(arr[i]<min){
			 min=arr[i];
		 }
	}
	
	printf("min: %d\n",min);
	printf("max: %d",max);
	
	return 0;
}	 
	
