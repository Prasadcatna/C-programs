#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp;
	char data[50];
	printf("Opening the file test.txt in write mode");
	fp = fopen("test.txt","w");
	if( fp == NULL){
		printf("Could not open file");
	}
	else{
		printf("\n Enter some text: ");
		while(strlen(gets(data))>0){
			fputs(data,fp);
			fputs("\n",fp);
		}
		fclose(fp);
		printf("Closing the file...");
	}
}
