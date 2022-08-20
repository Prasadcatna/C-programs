#include<stdio.h>

int main(){
	char *ptr;
	char str[6] = "Hello";
	
	ptr = str;
	printf("address %p",str);

	while(*ptr != '\0'){
		printf("\n address %p of %c",ptr,*ptr);
		ptr++;
	}
}
