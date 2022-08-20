#include<stdio.h>

int main(){
	char a[25],b[25],c[50];
	int i=0,j=0;
	scanf("%s", a);
	scanf("%s", b);

	while(a[i] != '\0'){
		c[j] = a[i];
		i++;
		j++;
	}
	i=0;
	while(b[i] != '\0'){
		c[j] = b[i];
		i++;
		j++;
	}

	c[j] = '\0';

	printf("Conta :%s", c);


}
