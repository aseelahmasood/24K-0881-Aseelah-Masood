#include <stdio.h>
int main()
{
  int n1,n2=0;
  printf("enter two numbers\n");
  scanf("%d%d",&n1,&n2);
 
  printf("Before swap: n1: %d \t n2: %d\n", n1, n2);
 
  n1 = n1 ^ n2;
  n2 = n1 ^ n2;
  n1 = n1 ^ n2;
 
  printf("After swap: n1: %d \t n2: %d\n", n1, n2);
 
  return 0;
}