#include<stdio.h>

int main(){
	int a =10;
	int *p = &a;
	printf("Pointer address of p of a %p\n", p);
	printf("Pointer value of a%d\n",*p);
	a=11;
	*p = 4;
	printf("Value of a%d--> %d\n",*p, a);
}
