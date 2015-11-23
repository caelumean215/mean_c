#include<stdio.h>

int main(){

	int i;
	int j;
	int temp;

	int a[5]={4,6,7,9,1};

	for(i=0; i < 5; i++){
		for(j=0; j < 4; j++){
			if(a[j]>a[j+1]){
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i=0;i < 5; i++){
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}