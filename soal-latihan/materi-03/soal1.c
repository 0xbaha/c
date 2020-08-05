#include<stdio.h>

int main(){
	int n, i;
	int jumlah = 0;

	printf("masukkan nilai n : ");
	scanf("%d", &n);

	jumlah = 0;
	for(i = 0; i <= 2*n; i++){
		if(i % 2 != 0)
			jumlah = jumlah + i;
	}
	printf("jumlah bilangan ganjil =%d", jumlah);
	return 0;
}
