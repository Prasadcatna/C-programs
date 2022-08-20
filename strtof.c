#include<stdio.h>
#include<stdlib.h>

int main(){
	char orbits[]="686.97 365.24";
	char* pE;
	float f1,f2;
	f1 = strtof(orbits, &pE);
	f2 = strtof(pE,NULL);
	printf("one martian year takes %.2f Earth years.\n",f1/f2);
}
