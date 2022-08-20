#include<stdio.h>
#include<stdlib.h>

int main(){
	long int li;
	char buffer[256];
	printf("ENter a long number: ");
	fgets(buffer,256,stdin);
	li = atol(buffer);
	printf("The value entered is %ld. Its double is %ld.\n",li,li*2);
}
