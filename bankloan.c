#include <stdio.h>
int main(){
	int age;
	float annualincome;
	
	
	printf("Enter the age");
	scanf("%d",&age);
	
	printf("Enter the annualincome");
	scanf("%f",&annualincome);
	
	if(age>=21&&annualincome>=21000){
	printf("Congratulations you qualify a loan\n" ) ;               }
		
	else{
		printf("Unfortunately we are unable to offer you a loan at this time\n");
	}
		
			return 0;
	}	