#include<stdio.h>

int main(){
	float c, *pc;
	c =11.34;
	pc=&c;
	printf("Address of p: %p\n",pc);
	printf("Value of p: %f\n",*pc);
	pc=pc+2;
	printf("Increased address of p: %p\n",pc);
	*pc=2.3;
	printf("Address of p after: %p\n",pc);
	printf("Value of p: %f \n",c);

}
