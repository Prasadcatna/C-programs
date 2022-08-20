#include<stdio.h>

int main(int argc,char *argv[]){
	int a,b,sum;
	if(argc!=3){

		printf("prg name value1 value2");
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	sum=a+b;


	printf("sum of %d,%d is: %d\n",a,b,sum);
}
