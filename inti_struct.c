#include<stdio.h>

struct Employee{
	char name[25];
	int empid;
	float salary;
}e1={"Prasad", 32027, 100000.99};

int main(){
	printf("Employee Name: %s\n",e1.name);
	printf("Employee ID: %d\n",e1.empid);
	printf("Salary: %.2f\n",e1.salary);
}
