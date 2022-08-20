#include<stdio.h>
#include<string.h>

struct Student{
	char name[30];
	int id,m1,m2,m3;
	float avg;
};

int main(){	
	int n,i,sum;
	printf("Enter the no. students:");
	scanf("%d",&n);
	struct Student s[n];

	for(i=0;i<n;i++){
		sum =0;
		printf("Enter student name: \n");
		scanf("%s",s[i].name);
		printf("ENter student id: \n");
		scanf("%d",&s[i].id);
		printf("ENter 3 marks: \n");
		scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
		sum= s[i].m1+s[i].m2+s[i].m3;
		s[i].avg = sum/3;
	}

	for(i=0;i<n;i++){
		printf("Name: %s\n", s[i].name);
		printf("ID: %d\n", s[i].id);
		printf("Average: %.2f\n",s[i].avg);
		printf("------------------\n");
	}
}
