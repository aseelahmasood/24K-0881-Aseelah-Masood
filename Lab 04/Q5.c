#include<stdio.h>
	int main() {
		int CusID, units=0;
		float total,surcharge,netamount=0;
		char name[10];
		
		printf("Enter customer ID\n");
		scanf("%d",&CusID);
		printf("Enter name\n");
		scanf("%s",name);
		printf("Enter units consumed\n");
		scanf("%d",&units);
		
		printf("Customer ID : %d\n",CusID);
		printf("Customer Name : %s\n",name);
		
		if (units<=199){
			total=(units*16.2);
			printf("units consumed = %d\n",units);
			printf("Amount Charges @Rs.16.2 per unit=%.2f\n",total);
		}else if((units>=200)&&(units<300)){
			total=(units*20.1);
			printf("units consumed = %d\n",units);
			printf("Amount Charges @Rs.20.1 per unit=%.2f\n",total);
		}else if((units>=300)&&(units<500)){
			total=(units*27.1);
			printf("units consumed = %d\n",units);
			printf("Amount Charges @Rs.27.1 per unit=%.2f\n",total);
		}else if(units>500){
			total=(units*35.9);
			printf("units consumed = %d\n",units);
			printf("Amount Charges @Rs.35.9 per unit=%.2f\n",total);
		}
		if (total>18000){
			surcharge=(total*0.15);
			netamount=(total+surcharge);
			printf("surcharge amount=%.2f\n",surcharge);
			printf("net amount paid by the customer=%.2f\n",netamount);
		}
		return 0;
	}
			
		
		
		
		