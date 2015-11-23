#include <stdio.h>

#define MAX_SIZE 10

int data[MAX_SIZE];
int top;

void init_stack(){
	top = -1;
}
void push(int value){
	if( top >= MAX_SIZE-1){
		printf("over flow\n");
	}
	else
		data[++top] = value;
}

int pop(){
	if( top < 0){
		printf("under flow\n");
	}
	else
		return data[top--];
}
int main(){
	init_stack();


	push(2);
	printf("%d\n",pop());
	/*push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	push(7);
	push(8);
	push(9);
	push(10);
	push(11);*/
	//pop();
	
	return 0;
}
