
#include <stdio.h>

int main(){

	char ch;
	int i;
	int res;

	// scanf()�� ��ȯ���� ����
	res = scanf("%c", &ch);

	// res�� scanf()�κ��� �Է¹��� ���� ���ʴ�� ����Ѵ�.
	// scanf()��ȯ���� -1�� �� �����Ѵ�.
	while(res != -1){

		printf("%c", ch);
		res = scanf("%c", &ch);
	}

	return 0;
}