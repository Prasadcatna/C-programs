#include<stdio.h>

typedef struct details{
	int eid;
	float basic_salary,HRA,deduction,gross_salary;
	char ename[25];
}info;

int main(){
	int i;
	float gs=0;

	info s[5];

	for(i=0;i<5;i++){
		printf("Enter Emp id: ");
		scanf("%d",&s[i].eid);
		printf("Enter Name: ");
		scanf("%s", s[i].ename);
		printf("Enter basic salary: ");
		scanf("%f", &s[i].basic_salary);
		printf("ENter HRA: ");
		scanf("%f", &s[i].HRA);

		gs = s[i].basic_salary+s[i].HRA;
		s[i].gross_salary = gs + (gs*2/100);
	}

	FILE *fp;
	fp = fopen("details.txt","w");
	if(fp == NULL){
		printf("cannt open the file\n");
		return 1;
	}
	
	for(i=0;i<5;i++){
		fprintf(fp,"EMp ID: %d\n",s[i].eid);
		fprintf(fp,"Emp Name: %s\n",s[i].ename);
		fprintf(fp,"BAsic salary: %.2f\n",s[i].basic_salary);
		fprintf(fp,"HRA: %.2f\n",s[i].HRA);
		fprintf(fp,"Gross salary: %.2f\n",s[i].gross_salary);
	}
	
	
}
