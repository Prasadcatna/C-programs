#include<stdio.h>

int main(){
	int a[5][5],b[5][5],i,j,flag;
	printf("ENter A matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("%d", &a[i][j]);
	}
	printf("Ent4er B matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("%d", &b[i][j]);
	}

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j] != b[i][j])
				flag=1;
				break;
		}
	}

	if(flag == 1)
		printf("not an identical matrix\n");
	else
		printf("identical matrix\n");

}
