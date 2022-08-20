#include<stdio.h>

int main(){

struct address{
	int doors,mobileno;
	char street_name[25];
	char cityname[25];
};

struct student{
	int id;
	char name[20];
	struct address  d1;
};

struct employee{
	int emp_id;
	char ename[20];
	struct address d2;
};
struct student s1;
struct employee e1;
printf("Student ID: ");
scanf("%d",&s1.id);
printf("\n Student name: ");
scanf("%s", s1.name);
printf("\n Door no: ");
scanf("%d",&s1.d1.doors);
printf("\n Street name: ");
scanf("%s", s1.d1.street_name);
printf("\n Cityname: ");
scanf("%s", s1.d1.cityname);
printf("\n Mobile No: ");
scanf("%d", &s1.d1.mobileno);
printf("\n Emp ID: ");
scanf("%d", &e1.emp_id);
printf("\n Emp Name: ");
scanf("%s",e1.ename);
printf("\n Door no: ");
scanf("%d",&e1.d2.doors);
printf("\n Street name: ");
scanf("%s", e1.d2.street_name);
printf("\n City name: ");
scanf("%s", e1.d2.cityname);
printf("\n Mobile no: ");
scanf("%d", &e1.d2.mobileno);
printf("----------\n");


printf("Name of Student %s\n", s1.name);
printf("Student ID: %d\n", s1.id);
printf("Doors : %d\n",s1.d1.doors);
printf("Street Name: %s\n",s1.d1.street_name);
printf("City: %s\n",s1.d1.cityname);
printf("Mobile No: %d\n",s1.d1.mobileno);
printf("-------------------------------------\n");
printf("Name of Employee %s\n", e1.ename);
printf("Employee ID: %d\n", e1.emp_id);
printf("Doors : %d\n",e1.d2.doors);
printf("Street Name: %s\n",e1.d2.street_name);
printf("City: %s\n",e1.d2.cityname);
printf("Mobile No: %d\n",e1.d2.mobileno);
}
