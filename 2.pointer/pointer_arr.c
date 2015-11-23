#include <stdio.h>

void printArr(int *arr, int index){

	int i;

	for(i=0; i< index; i++){
		printf("%d\t", arr[i]);
	}

	printf("\n");
}

int main(){

	int arr[5]={1,2,3,4,5};
	
	// 배열의 길이 구하기 배열의 크기 / 자료형 크기
	int index = sizeof(arr) / sizeof(arr[0]);

	// 배열은 배열 변수명이 첫 번째 주소값을 가리키기 때문에 배열 변수명을 쓴다.
	// 포인터는 값을 가리키는 변수이기 때문에 인자값으로 전달하는 주소값으로는 
	// 배열의 크기를 알 수 있는 방법이 없기 때문에 배열의 크기를 인자로 전달한다.
	printArr(arr, index);

	return 0;
}