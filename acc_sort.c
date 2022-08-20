#include<stdio.h>

int main(){
	int a[] = {45,66,78,45,32,31,44,81,11,9},i,j,temp;

	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] =a[j];
				a[j] = temp;
			}
		}
	}
	printf("Assending order is\n");
	for(i=0;i<10;i++)
		printf("%d ", a[i]);
	printf("\nDecending order is\n");
	for(i=9;i>=0;i--)
		printf("%d ", a[i]);
}
