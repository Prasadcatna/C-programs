#include<stdio.h>

int get(int[], int);
int main(){
	int a[5] = {10,30,40,20,50};
	get(a, 5);
}

int get(int b[], int s){
       	int i;
	for(i=0;i<s;i++)
		printf("%d ", b[i]);
}	

