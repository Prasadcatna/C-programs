#include<stdio.h>
#include<stdlib.h>
int main(){
	char Num[] = "250068492 7b06af00 1100011011110101010000110000 0x6fffff";
	char* pE;
	unsigned long long int ulli1, ulli2,ulli3,ulli4;
	ulli1 = strtoull(Num, &pE, 10);
	ulli2 = strtoull(pE,&pE,16);
	ulli3 = strtoull(pE, &pE,2);
	ulli4 = strtoull(pE, NULL, 0);
	printf("The decimal equ are: %llu, %llu, %llu and %llu\n", ulli1,ulli2,ulli3,ulli4);
}
