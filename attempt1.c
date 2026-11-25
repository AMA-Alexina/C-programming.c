#include <stdio.h>
int main(){
	int height;
	double bankbalance;
	int phonenumber;
	
	printf("Enter height:\t");
	scanf("%d",&height);
	
	printf("Enter bankbalance:\t");
	scanf("%lf",&bankbalance);
	
	printf("Enter phone number:\t");
	scanf("%d",&phonenumber);
	
	printf("The height is %d\n",height);
	printf("The bankbalance is%lf\n",bankbalance);
	printf("The phone number is%d\n",phonenumber);
	
	return 0;
}
	
	