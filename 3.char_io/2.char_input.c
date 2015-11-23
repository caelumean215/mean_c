
#include <stdio.h>

int main(){

	char ch;
	int i;
	int res;

	// scanf()에 반환값을 저장
	res = scanf("%c", &ch);

	// res가 scanf()로부터 입력받은 값을 차례대로 출력한다.
	// scanf()반환값이 -1일 때 종료한다.
	while(res != -1){

		printf("%c", ch);
		res = scanf("%c", &ch);
	}

	return 0;
}