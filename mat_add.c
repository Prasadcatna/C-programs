#include<stdio.h>

int main(){
	int i,j,a[5][5],b[5][5],c[5][5];

	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("%d", &a[i][j]);
	}

	printf("Enter for b");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("%d", &b[i][j]);
	}

	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			c[i][j] = a[i][j] + b[i][j];
	}

	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}

}
