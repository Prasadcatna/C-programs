#include<stdio.h>

struct Employee{
	char name[25];
	int emp_id;
	float salary;
};

int main(){
	int i;
	struct Employee record[5]={
		{"Prasad", 32, 78787},
		{"Ram", 43, 8787813},
		{"Bob", 56, 131313},
		{"Tom", 21, 76767},
		{"Pur", 767, 6767.88}
	};

	for(i=0;i<5;i++){
		printf("Employee Name: %s\n",record[i].name);
		printf("ID: %d\n",record[i].emp_id);
		printf("Salary: %.2f\n",record[i].salary);
		printf("--------------------");
		printf("\n");
	}
}
