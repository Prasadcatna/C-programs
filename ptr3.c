#include<stdio.h>

void prt(int *, int *);
int main(){
	int x,y;
	printf("Enter value of x and y: \n");
	scanf("%d%d",&x,&y);

	printf("Before swap: %d %d",x,y);
	prt(&x,&y);
	printf("After: %d %d",x,y);
}

void prt(int *a, int *b){
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
