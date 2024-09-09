#include<stdio.h>
int main() {
	float distance,forward_fuelprice,return_fuelprice,totalcost,fuel_consumed,fuel_avg;
	distance=1207;
	forward_fuelprice=118;
	return_fuelprice=123;
	
	printf("enter fuel average of car. Value must be positive \n");
	scanf("%f", &fuel_avg);
	
	fuel_consumed=(distance*2)/fuel_avg;
	totalcost=((distance/fuel_avg)*forward_fuelprice)+((distance/fuel_avg)*return_fuelprice);
	
	printf("total fuel cost: ",totalcost,"fuel consumed: ", fuel_consumed);
	
}