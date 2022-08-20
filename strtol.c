#include<stdio.h>
#include<stdlib.h>

int main(){
	char Num[] = "2001 60c0c0 = 1101110100110100100000 0x6ffff";
	char* pE;
	long int li1,li2,li3,li4;
	li1 = strtol(Num, &pE,10);
	li2 = strtol(pE, &pE,16);
	li3 = strtol(pE,&pE,2);
	li4 = strtol(pE,NULL,0);
	printf("The decimal equivalents are: %ld, %ld, %ld and %ld\n",li1,li2,li3,li4);
}
