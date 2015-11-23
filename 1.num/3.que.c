#include <stdio.h>

#define MAX_SIZE 5

int data[MAX_SIZE];
int front;
int rear;

void init_que(){
	front = -1;
	rear = -1;
}

void put(int value){
	
	if(rear+1 == front){
		printf("over flow\n");
	}
	else{
		if(front == -1) ++front;
		
		if(rear > MAX_SIZE -1){
		rear = -1;
		}
		
		data[++rear] = value;
	}
}

int get(){

	if(front == rear){
		printf("under flow\n");
		return -1;
	}
	else{
		return data[front++];
	}
}
int main(){
	init_que();
	
	
	put(2);
	put(2);
	put(2);
	put(2);
	put(2);
	put(2);
	

	return 0;
}