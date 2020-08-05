#include<stdio.h>

int main(){
	int jml_kelahiran,jml_masuk,jml_kematian,jml_keluar;
	int total;

	printf("Masukan jumlah kelahiran :");
	scanf("%d", &jml_kelahiran);

	printf("Masukan jumlah Penduduk masuk :");
	scanf("%d", &jml_masuk);

	printf("Masukan jumlah kematian :");
	scanf("%d", &jml_kematian);

	printf("Masukan jumlah penduduk pergi keluar:");
	scanf("%d", &jml_keluar);

	total = jml_kelahiran + jml_masuk - jml_kematian - jml_keluar;

	printf("jumlah penduduk %d",total);

}
