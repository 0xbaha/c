#include<stdio.h>

int main () {

	int gaji_pokok, jml_anak, tnjngn_anak, tnjngn_istri, total;

	printf("masukkan gaji pokok: ");
	scanf("%d", &gaji_pokok);

	printf("masukkan jumlah anak: ");
	scanf("%d", &jml_anak);

	printf("masukkan tunjangan anak: ");
	scanf("%d", &tnjngn_anak);

	printf("masukkan tunjangan istri: ");
	scanf("%d", &tnjngn_istri);

	total = gaji_pokok + (jml_anak * tnjngn_anak ) + tnjngn_istri;

	printf ("gaji pokok pns: %d", total);

	return 0;
}
