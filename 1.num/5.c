#include <stdio.h>

#define MAX_SIZE 5

int data[MAX_SIZE];
int top;

void init_stack(){
	top = -1;
}

void push(int value){
	if(top >= MAX_SIZE-1){
		printf("over flow\n");
	}
	else
		data[++top] = value;

}

int pop(){
	if(top <0){
		printf("under flow\n");
	}
	else
		return data[top--];

}
int main(){
	init_stack();
	pop();
	

	return 0;
}