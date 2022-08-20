#include<stdio.h>

int main(){
	char a[20],b[20],i=0;
	fgets(a,20,stdin);
	while(a[i] != '\0'){
		b[i] = a[i];
		i++;
	}
	b[i] = '\0';
	printf("Copied stirng is : %s", b);
}
