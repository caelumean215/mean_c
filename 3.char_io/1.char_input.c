
#include <stdio.h>

int main(){
	
	char ch;
	int i;

	// Buffer
	// �����͸� �� ������ �ٸ� �� ������ �����ϴ� ���� �Ͻ������� �� �����͸� �����ϴ� �޸��� ����
	// ���۴� FIFO����� ���

	// scanf()
	// Ű����κ��� ���� �Է¹޾� ���ۿ� ������ ��, �װ��� scanf�� �޾Ƽ� ������ �����ϴ� ����

	// Ex) input -->  minjung\n
	//      buffer -> minjung\n

	//      scanf("%c", &ch);
	//      buffer -> inung\n
	//      !! %c�� ���ڸ� �޴� ���๮�ڷ� scanf()�� ch�ּҿ� ���� �־��شٴ� ���̴�.
	
	scanf("%c", &ch);

	// scanf()�� \n ���;� ���ᰡ �ȴ�.
	// ���ۿ� �ִ� ���� ��� ����ϱ� ���� \n�� �������� ���.
	while(ch != '\n'){

		printf("%c", ch);
		scanf("%c", &ch);
	}

	return 0;
}