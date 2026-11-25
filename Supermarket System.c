#include <stdio.h>
#include <string.h>

struct product{
	int code;
	char name[10];
	float price;
	int quantity;
};

int main(){
	struct product product1;
	float totalvalue;
	
	product1.code;
	strcpy(product1.name,"OMO");
	product1.price;
	product1.quantity;
	
	printf("Enter the code:");
	scanf("%d",&product1.code);
	printf("Enter the name: ");
	scanf("%s",&product1.name);
	printf("Enter the price:");
	scanf("%f",&product1.price);
	printf("Enter the quantity:");
	scanf("%d",&product1.quantity);
	
	totalvalue=product1.price*product1.quantity;
	
	printf("Product Details\n:");
	printf("Code: %d\n",product1.code);
	printf("Name: %s\n",product1.name);
	printf("Price: %f\n",product1.price);
	printf("Quantity: %d\n",product1.quantity);
	printf("totalvalue: %.2f",totalvalue);
	
	return 0;
	
}
