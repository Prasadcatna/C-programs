#include<stdio.h>
#include<string.h>

int main(){
	char name[5][25],rev[25];
	int i,n,j,len,y;
	printf("Enter how many char\n: ");
		scanf("%d", &n);

	for(i=0;i<n;i++)
		scanf("%s", name[i]);
	

	for(i=0;i<n;i++){
		len = strlen(name[i]);
		for(y=0,j=len-1;y<len;j--,y++){
			rev[y]=name[i][j];
		}	
		rev[y] = '\0';

		if(strcmp(name[i], rev) == 0)
			printf("\n%s", name[i]);
	}

}
