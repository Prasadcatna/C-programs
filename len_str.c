#include<stdio.h>
#include<string.h>

int main(){
	char name[20];
	int i=0;

	fgets(name,20,stdin);

	while(name[i] != '\0'){
		printf("%d ---> %c\n",i, name[i]);
		i++;
	}
	printf("%d", i);
}
