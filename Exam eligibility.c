#include <stdio.h>
int main(){
	float attendance;
	float  averagemarks;
	
	printf("Enter attendance");
	scanf("%f",&attendance);
	
	printf("Enter averagemarks");
	scanf("%f",&averagemarks);
	
	if(attendance>=75&& averagemarks>=40)
	{
		printf("Eligible for final exam\n");
	}
	else
	{
		printf("Not eligible for final exam\n");
	}
	return 0;
}