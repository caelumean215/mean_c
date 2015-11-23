
#include <stdio.h>

int main(){

	char ch;

	// 키보드 버퍼로부터 입력을 받아서 enter가 입력 될 때까지 
	// 키보드 입력 값들을 한 번에 한문자씩 계속해서 키보드 버퍼에 저장한다.
	// 키보드로부터 한 번에 한 문자씩만을 읽어오며 아스키 코드를 반환한다.
	// getchar()를 호출하여 버퍼에 남아 있던 \n을 없앨 수 있다.
	ch = getchar();

	while(ch != '\n'){
	 
		putchar(ch);
		ch =getchar();
	}

	return 0;
}