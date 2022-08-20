#include<stdio.h>

int main(int argc, char *argv[]){
	FILE *fp;
	int count;
	char c;
	fp=fopen(argv[1],"r");
	c=fgetc(fp);
	while(c != EOF){
		count++;
		c=fgetc(fp);
	}
	printf("Total characters: %d",count);
}
