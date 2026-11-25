/*
a program to calculate the fine for overdue library
Upto 7 days, fhe charges is ksh. 20
8-14 days,the charges is ksh.50
15 days or more,the charges is kdh. 100
*/
#include <stdio.h>
int main()
{
	float bookID,fineRate,fineAmount,dueDate,returnDate,daysOverdue;
	printf("Enter the returnDate:\t");
	scanf("%f,& returnDate");
	daysOverdue=returnDate-dueDate;
	if(daysOverdue<=7)
	{
		fineAmount=20;
	}
	else if(daysOverdue<=14)
	{
		fineAmount=50;
	}
	else
	{
		fineAmount=100;
	}
	printf("daysOverdue=%f\n",daysOverdue);
	printf("fineAmount ksh:%f\n",fineAmount);
	return 0;
}