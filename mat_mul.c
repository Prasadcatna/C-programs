#include<stdio.h>

void mul();

int main(){
	int a[5][5], b[5][5],i,j,r1,c1,r2,c2,k,mul[5][5];

	printf("Enter row and column for A matrix");
	scanf("%d%d", &r1,&c1);
	printf("Enter row and column for B matrix");
	scanf("%d%d", &r2,&c2);

	if(c1 != r2)
		printf("Cann't multiply");
	else
		printf("Enter elements for A matrix\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++)
				scanf("%d", &a[i][j]);
			printf("\n");
		}
		printf("Enter elements for B matrix\n");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++)
				scanf("%d", &b[i][j]);
			printf("\n");
		}

		printf("Multiplication is :\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				for(k=0;k<c1;k++)
					mul[i][j]+=a[i][j]*b[i][j];
			}
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++)
				printf("%d ",mul[i][j]);
		       printf("\n");	
		}

}
