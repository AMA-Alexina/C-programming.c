#include <stdio.h>
int main(){
	float height;
	double bankbalance;
	int phonenumber;
	
	printf("Enter  height\t");
	scanf("%f",&height);
	
	printf("Enter bankbalance\t");
	scanf("%lf",&bankbalance);
	
	printf("Enter phonenumber\t");
	scanf("%d",&phonenumber);
	
	printf("The height is%.2f\n",height);
	printf("The bankbalance is %.2lf\n",bankbalance);
	printf("The phonenumber is%d\n",phonenumber);
	
	return 0;
}