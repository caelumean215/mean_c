
#include <stdio.h>
#include <string.h>

int main(){

	char str[20];
	char ch;
	

	// 문자열은 첫 번째 문자의 주소값이 포인터에 저장된다.
	// 문자열은 엄밀히 따지면 char형의 배열이다.

	printf("%s\n", "minjung");
	
	// 문자열의 값은 첫 번째 문자의 주소값이므로 1을 더하면
	// char형 배열은 +1된 번지의 주소값이 출력된다.
	printf("%p\n", "minjung" + 1);

	// 포인터가 가리키는 값을 연산하여 출력한다.
	printf("%c\n", *"minjung" + 1);
	printf("%c\n", "minjung"[2]);

	// fgets()는 키보드로 입력 받은 버퍼의 값을 배열의 크기만큼 저장합니다.
	fgets(str, sizeof(str), stdin);
	
	// 버퍼에 남아 있는 값을 저장합니다.
	// 버퍼에 남아 있는 값이 없다면 새로 입력합니다.
	// !! 아래에 구문은 버퍼에 남아있는 값이 있는지 없는지 체크하는 구문입니다.
	scanf("%c\n", &ch);
	printf("%c\n", ch);

	// 버퍼에 남아 있는 값이 있다면 모두 지웁니다.
	fflush(stdin);

	// strlen 문자열의 길이를 리턴
	// !! 아래의 구문은 문자열에 개행문자가 들어가있을 때 삭제를 위한 것
	//    문자열의 길이에서 -1을 하면은 마지막 단어의 값을 찾아갑니다.
	str[strlen(str)-1] = '\0';
	printf("%s\n", str);

	return 0;
}