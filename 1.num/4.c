#include <stdio.h>

int main(){
	int i;
	int j;
	int temp;

	int num[5]={4, 5, 8, 3, 1};

	for(i =0; i < 5; i++){
		for(j =0; j < 4; j++){
			if(num[j]>num[j+1]){
				temp = num[j+1];
				num[j+1] = num[j];
				num[j] = temp;
			}
		}
	}
	for(i =0; i < 5; i++){
		printf("%d",num[i]);
	}
	printf("\n");
	return 0;
}