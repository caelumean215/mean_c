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
	
	// �迭�� ���� ���ϱ� �迭�� ũ�� / �ڷ��� ũ��
	int index = sizeof(arr) / sizeof(arr[0]);

	// �迭�� �迭 �������� ù ��° �ּҰ��� ����Ű�� ������ �迭 �������� ����.
	// �����ʹ� ���� ����Ű�� �����̱� ������ ���ڰ����� �����ϴ� �ּҰ����δ� 
	// �迭�� ũ�⸦ �� �� �ִ� ����� ���� ������ �迭�� ũ�⸦ ���ڷ� �����Ѵ�.
	printArr(arr, index);

	return 0;
}