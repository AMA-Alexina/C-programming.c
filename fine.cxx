/* program to calculate the fine for overdue library books upto 7days=20 and <=14days=50 and >=15 days=100
*/

#include <stdio.h>
int main(){
	int bookID,duedate,returndate,daysoverdue,finerate,fineamount;
	
	printf("Enter the bookID");
	scanf("%d",&bookID);
	
	printf("Enter the due date");
	scanf("%d",&duedate);
	
	printf("Enter return date");
	scanf("%d",&returndate);
	
	daysoverdue=returndate-duedate;
	if{

		finerate=20;
		printf("days over due=%d\t",daysoverdue);
		printf("fine amount=%d\t",fineamount);
	}
	else if{
		finerate=50;
		printf("days over due=%d\t",daysoverdue);
		printf("fine amount=%d\t",fineamount);
	}
	else{
		finerate=100;
		printf("days over due=%d\t",daysoverdue);
		printf("fine amount=%d\t",
		fineamount);
	}
	
	return 0;
}
	
	