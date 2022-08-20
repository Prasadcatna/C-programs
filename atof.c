#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	double n,m;
	double pi=3.1415926535;
	char buffer[256];
	printf("ENter degree: ");
	fgets(buffer,256,stdin);
	n = atof(buffer);
	m = sin(n*pi/180);
	printf("The sin of %.2f degree is %.2f\n",n,m);
}
