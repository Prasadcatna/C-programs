#include<stdio.h>

int main(){
	int a[10] = {45,66,78,32,31,11,44,81,11,9};
	int max = a[0], min= a[0],i;

	for(i=1;i<10;i++){
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min = a[i];
	}
	printf("MAx is %d and min is %d",max,min);
}
