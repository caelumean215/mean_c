
#include <stdio.h>

int main(){
	
	char ch;
	int i;

	// Buffer
	// 데이터를 한 곳에서 다른 한 곳으로 전송하는 동안 일시적으로 그 데이터를 보관하는 메모리의 영역
	// 버퍼는 FIFO방식을 사용

	// scanf()
	// 키보드로부터 값을 입력받아 버퍼에 저장한 뒤, 그것을 scanf로 받아서 변수에 저장하는 구조

	// Ex) input -->  minjung\n
	//      buffer -> minjung\n

	//      scanf("%c", &ch);
	//      buffer -> inung\n
	//      !! %c는 문자를 받는 개행문자로 scanf()가 ch주소에 값을 넣어준다는 것이다.
	
	scanf("%c", &ch);

	// scanf()는 \n 들어와야 종료가 된다.
	// 버퍼에 있는 값을 모두 출력하기 위해 \n을 조건으로 사용.
	while(ch != '\n'){

		printf("%c", ch);
		scanf("%c", &ch);
	}

	return 0;
}