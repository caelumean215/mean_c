
#include <stdio.h>

int sum(int *num1,int *num2){
	return *num1 + *num2;
}

int main(){
	
	int num1 =4;
	int num2 = 5;
	int result;

	result = sum(&num1,&num2);
	
	printf("%d\n", result);

	return 0;
}