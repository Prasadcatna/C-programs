#include<stdio.h>

struct details{
	char name[25];
	char f_name[25];
};

typedef struct details d;

void initial(d []);

int main(){
	d record[3] = {
		{"Bob","Rob"},
		{"Tommy","John"},
		{"Joker","Joke"}
	};

	initial(record);
}

void initial(d s1[]){
	int i;
	for(i=0;i<3;i++){
		printf("Name: %s_%c\n",s1[i].name,s1[i].f_name[0]);
	}
}
