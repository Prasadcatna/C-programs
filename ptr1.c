#include<stdio.h>

int main(){
	int a = 5;
	int x[4] = {32,98,89,90};
	int *pc;
	int i;

	pc=&x[0];
	printf("address of x[0]: %p",pc);
	pc=x;
	printf("address if x[0]: %p", x);

	for(i=0;i<4;++i)
			printf("\n%$d = %p\n",x[i], &x[i]);

}
