#include<stdio.h>

int main(){
	char* buffer = "Heloo";
	char a[25];
	int b;
	b = sscanf(buffer, "%s", a);
	printf("Value of buffer: %s",a);	
}
