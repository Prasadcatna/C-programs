#include<stdio.h>

int main(){
	char ch = 'a';
	int n1 = -10;
	unsigned int n2 = 200;
	int n3 = 50;
	float n4 = 5.5;
	float n5 = 3000.234577;
	char ch2[10] = "know";

	printf("ch = %c\n",ch);
	printf("n1 =  %d\n",n1);
	printf("n2 = %u\n",n2);
	printf("Octal value of n3 = %o\n",n3);
	printf("Hexa value of n4 = %x\n",n4);
	printf("n4 = %f\n",n4);
	printf("n5 = %e\n",n5);
	printf("n5 = %g\n",n5);
	printf("ch2 = %s\n",ch2);
}
