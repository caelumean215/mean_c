#include <stdio.h>
#define MAX_SIZE 5

int main(){
	int grade[MAX_SIZE];
	char student[MAX_SIZE][5];
	double avg[5];
	int ko[5]; 
	int en[5];
	int ma[5];

	int i;
	printf("이름을 입력하세요\n");
	for(i =0; i < MAX_SIZE; i++){
		scanf("%s",student[i]);
	}
	printf("국어,영어, 수학 점수: \n");
	for(i=0; i < MAX_SIZE; i++){
		scanf("%d %d %d\n",ko[i],en[i],ma[i]);
		avg[i] = (double)(ko[i] + en[i] + ma[i])/3;
	}
	printf("이름	국어	영어	수학	평균	\n");
	for(i=0; i < 5; i++){
		printf("%s	%d		%d		%d		%lf ",student[i], ko[i], en[i], ma[i], avg[i]);
	}
return 0;
}