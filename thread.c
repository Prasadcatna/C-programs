#include<stdio.h>

int fucn1(int amount){
	int current=500, amt = amount;
	current = current - amount;
	printf("%d", current);
	
}

int fucn2(int amount){
	int current, amt = amount;
	current = current - amount;
	printf("%d", current);
	
}

int main(){
	t1 = new thread(fucn1(5));
	t1.start();
}
