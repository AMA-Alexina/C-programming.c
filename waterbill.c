#include <stdio.h>
int main(){
	int units;
	float water_bill;
	printf("Enter water units consumed\n.");
	scanf("%d",&units);
	
	if(units <=30){
		water_bill=units*20;
	}
		
	else if(units<=60){
		water_bill=(30*20)+(units-30*25);
	}
	
	else{
		water_bill=(30*20)+(30*25)+(units_60*30);
	}
	printf("total water_bill %.2f\t",total bill);
		return 0;
		}				