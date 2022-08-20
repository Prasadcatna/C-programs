#include<stdio.h>
#include<string.h>

struct Person{
	char name[20];
	int citNo;
	float salary;
}person1,person2;

int main(){
	strcpy(person1.name, "TOny");
	strcpy(person2.name, "Bob");
	person1.citNo = 1234;
	person2.citNo = 4566;
	person1.salary = 12445;
	person2.salary = 31121;

	printf("Name: %s\n",person1.name);
	printf("City No: %d\n",person1.citNo);
	printf("Salary: %.2f\n",person1.salary);
	
	printf("Name: %s\n",person2.name);
	printf("City No: %d\n",person2.citNo);
	printf("Salary: %.2f\n",person2.salary);
}
