// Volume and Surface area of a cylinder
#include <stdio.h>

int main(){
	float radius;
	float height;
	float volume;
	float surfacearea;
	
	//Prompt entry of radius and height
	
	printf("Enter radius");
	scanf("%f",&radius);
	
	printf("Enter height");
	scanf("%f",&height);
	
	volume=3.142*radius*radius;
	surfacearea=(2*3.142*radius*radius)+(2*3.142*radius*height);
	
	printf("The volume is%.2f\n",volume);
	printf("The surfacearea is %.2f\n",surfacearea);    printf("The radius is%.2f\n",radius);
	printf("The height is %.2f\n",height);
	
	return 0;
}
	
	