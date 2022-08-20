#include<stdio.h>

int main(){
	int a[5][5],trans[5][5],i,j,r,c;
	printf("Enter row and column\n");
	scanf("%d%d", &r,&c);
	if(r != c)
		printf("Cann't matrix\n");
	else
		printf("Enter matrix A: \n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++)
				scanf("%d", &a[i][j]);
		printf("\n");	
		}

		printf("Orginal Matrix\n");

		for(i=0;i<r;i++){
			for(j=0;j<c;j++)
				printf("%d ", a[i][j]);
		printf("\n");
		}

		printf("Transpossed Matrix\n ");

		for(i=0;i<r;i++){
			for(j=0;j<c;j++)
				printf("%d ", a[j][i]);
		printf("\n");
		}
}
