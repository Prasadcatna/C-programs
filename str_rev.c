#include<stdio.h>

int main(){
	char name[20];
	int i=0,len,j;
	
	fgets(name,20,stdin);
	while(name[i] != '\0')
		i++;
	len = i--;

	for(j=len;i>=0;i--)
		printf("%c", name[i]);
}
