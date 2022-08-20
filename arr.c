#include<stdio.h>

int a[20] = {10,30,50,20,40}, size =5;

void atbegin();
void deletebegin();
void atend();
void deleteend();
void in_index();
void del_index();

int main(){
	int ch;
	while(1){
		printf("1. Insert element at begining\n");
		printf("2. Insert element at end\n");
		printf("3. Delete element at begining\n");
		printf("4. Delete element at end\n");
		printf("5. Insert at index position\n");
		printf("6. Delete at index position\n");
		scanf("%d", &ch);
		if(ch == 1)
			atbegin();
		else if(ch == 2)
			atend();
		else if(ch == 3)
			deletebegin();
		else if(ch == 4)
			deleteend();
		else if(ch == 5)
			in_index();
		else if(ch == 6)
			del_index();
	}
}

void atbegin(){
	int i,num;
	printf("Enter position and number ");
	scanf("%d", &num);

	for(i=size-1;i>=0;i--){
		a[i+1] = a[i];
	}
	size+=1;

	a[0] =num;
	for(i=0;i<size;i++)
		printf("%d ", a[i]);
}

void atend(){
	int i,num;
	printf("Enter number ");
	scanf("%d",&num);
	a[size] = num;
	for(i=0;i<size+1;i++)
		printf("%d ",a[i]);
}

void deleteend(){
	int i;
	size--;
	for(i =0; i<size; i++)
		printf("%d ", a[i]);
}

void deletebegin(){
	int i;
	size--;
	for(i=0;i<size;i++)
		a[i] =a[i+1];
	for(i=0;i<size;i++)
		printf("%d ", a[i]);
}

void in_index(){
	int b[25], i,pos,num;
	printf("Enter position and element ");
	scanf("%d", &pos);
	scanf("%d",&num);
	for(i=0;i<pos;i++)
		b[i] = a[i];
	b[pos] = num;
	for(i = pos; i<size+1; i++)
		b[i+1] = a[i];
	for(i=0;i<size+1;i++)
		printf("%d ",b[i]);

}

void del_index(){
	int i, index;
	printf("Enter the index ");
	scanf("%d", &index);
	for(i=0;i<index;i++)
		a[i]=a[i+1];
	size--;
	for(i=0;i<size;i++)
		printf("%d ", a[i]);
}
