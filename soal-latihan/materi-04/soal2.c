#include<stdio.h>

void rata_rata(int z, int A[]);

void main(){
	const int nmak = 9999;
	int X[nmak];
	int n;

	printf("Masukan Batas Array : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		printf("X[%d] :", i+1);
		scanf("%d", &X[i]);
}
rata_rata(n, X);
}

void rata_rata(int z, int A[]){
	int jumlah = 0;
	float rata2;

	for(int i = 0; i< z; i++){
		jumlah = jumlah + A[i];
	}

	rata2 = (float)jumlah / z;
	printf("Hasil Rata ratanya %g", rata2);

}
