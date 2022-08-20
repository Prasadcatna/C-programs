#include<stdio.h>

struct student{
	float salary;
	int id1;
	char name;
	int id2;
}s;

void main(){
	printf("Size of struct: %d\n", sizeof(s));
	printf("Address of salary: %u\n",&s.salary);
	printf("Address of id1: %u\n",&s.id1);
	printf("Address of name: %u\n",&s.name);
	printf("Address of id2: %u\n",&s.id2);
}
