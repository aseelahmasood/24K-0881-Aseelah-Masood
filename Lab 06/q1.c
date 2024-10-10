#include<stdio.h>
int main(){
 int i;
 int num=1;
 for(i=0;num!=0;i++){

  printf("Enter a number\n");
  scanf("%d",&num);
  printf("num : %d\n",num);
 }
 return 0;
}