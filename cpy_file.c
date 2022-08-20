#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp, *fp1;
	char ch,f1[10],f2[10];
	printf("ENter 2 file name: ");
	scanf("%s%s",f1,f2);
	fp = fopen(f1,"r");
	fp1 = fopen(f2, "w");
	ch = fgetc(fp);	

	while(ch != EOF){
		putchar(ch);
		fputc(ch, fp1);
		ch = fgetc(fp);
	}
	fclose(fp);
	fclose(fp1);
}
