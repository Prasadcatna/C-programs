#include<stdio.h>
#include<string.h>

int main(int argcc, char *argv[]){
	FILE *fp, *fp1;
	char ch;
	fp = fopen(argv[1], "r");
	fp1 = fopen(argv[2], "w");
	ch = fgetc(fp);

	while(ch!=EOF){
		putchar(ch);
		fputc(ch,fp1);
		ch = fgetc(fp);
	}
	fclose(fp);
	fclose(fp1);
}
