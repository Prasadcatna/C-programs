#include<stdio.h>
#include<stdlib.h>

int main(){
	char Num[] = "250068492 7b06af00 1100011011110101010000110000 0x6ffffff";
	char* pE;
	long long int lli1,lli2,lli3,lli4;
	lli1 = strtoll(Num,&pE,10);
	lli2 = strtoll(pE,&pE,16);
	lli3 = strtoll(pE,&pE,2);
	lli4 = strtoll(pE,NULL,0);
	printf("The decimal equ are: %lld,%lld,%lld and %lld\n",lli1,lli2,lli3,lli4);
}
