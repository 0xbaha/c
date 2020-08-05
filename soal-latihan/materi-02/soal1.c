#include<stdio.h>

int main(){
	int bilbul;

	printf("masukkan angka : " );
	scanf("%d", &bilbul);

	if(bilbul % 4 == 0){
		printf("%d adalah bilangan kelipatan 4", bilbul);
	}else
		printf("%d adalah bukan bilangan kelipatan 4", bilbul);

	return 0;
}
