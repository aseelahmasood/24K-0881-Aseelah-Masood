#include<stdio.h>
	int main() {
		float amount,samount,damount;
		amount,samount,damount =0;
		
		printf("Enter the cost of items \n");
		scanf("%f",&amount);
		
		if ((amount>=500)&&(amount<=2000)) {
			samount=(amount*0.05);
			damount=amount-samount;
		}else if ((amount>=2000)&&(amount<=4000)){
			samount=amount*0.1;
			damount=amount-samount;
		}else if ((amount>=4000)&& (amount<=6000)) {
			samount=amount*0.2;
			damount=amount-samount;
		}else if ((amount>6000)){
			samount=amount*0.35;
			damount=amount-samount;
		}
		
		printf("amount=%f is the actual amount\n",amount);
		printf("samount=%f is the saved amount\n",samount);
		printf("damount=%f is the amount after discount\n",damount);
		return 0;
		
	}
		
			