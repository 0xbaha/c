#include <stdio.h>

void main(){
  /* DEKLARASI */
  /* Variabel Global */
  int n1, n2, n3, n4, n5;
  int max, min, max_type, min_type;
  float result;

  /* PROGRAM UTAMA */
  // baca masukan dari user
  puts("Masukan 5 bilangan:");
  scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

  // cari bilangan terbesar
  if (n1 >= n2 && n1 >= n3 && n1 >= n4 && n1 >= n5){
    max = n1;
  } else if (n2 >= n1 && n2 >= n3 && n2 >= n4 && n2 >= n5){
    max = n2;
  } else if (n3 >= n1 && n3 >= n2 && n3 >= n4 && n3 >= n5){
    max = n3;
  } else if (n4 >= n1 && n4 >= n2 && n4 >= n3 && n4 >= n5){
    max = n4;
  } else if (n5 >= n1 && n5 >= n2 && n5 >= n3 && n5 >= n4){
    max = n5;
  } else {
    max = 0;
  }

  // cari bilangan terkecil
  if (n1 <= n2 && n1 <= n3 && n1 <= n4 && n1 <= n5){
    min = n1;
  } else if (n2 <= n1 && n2 <= n3 && n2 <= n4 && n2 <= n5){
    min = n2;
  } else if (n3 <= n1 && n3 <= n2 && n3 <= n4 && n3 <= n5){
    min = n3;
  } else if (n4 <= n1 && n4 <= n2 && n4 <= n3 && n4 <= n5){
    min = n4;
  } else if (n5 <= n1 && n5 <= n2 && n5 <= n3 && n5 <= n4){
    min = n5;
  } else {
    min = 0;
  }

  // periksa ganjil atau genap
  // max_type atau min_type bernilai 0 jika genap, bernilai 1 jika ganjil
  if (max % 2 == 0){
    max_type = 0; // bilangan genap
  } else { // max % 2 == 1
    max_type = 1; // bilangan ganjil
  }
  if (min % 2 == 0){
    min_type = 0; // bilangan genap
  } else { // max % 2 == 1
    min_type = 1; // bilangan ganjil
  }

  // proses perhitungan antara bilangan terbesar dan terkecil
  //   jika max = ganjil dan min = ganjil maka penjumlahan
  //   jika max = ganjil dan min = genap  maka pengurangan
  //   jika max = genap  dan min = ganjil maka perkalian
  //   jika max = genap  dan min = genap  maka pembagian
  if (max_type == 1 && min_type == 1){        // ganjil && ganjil
    result = max + min; // penjumlahan
    printf("Hasil %d + %d = %.2f\n", max, min, result);
  } else if (max_type == 1 && min_type == 0){ // ganjil && genap
    result = max - min; // pengurangan
    printf("Hasil %d - %d = %.2f\n", max, min, result);
  } else if (max_type == 0 && min_type == 1){ // genap && ganjil
    result = max * min;   // perkalian
    printf("Hasil %d * %d = %.2f\n", max, min, result);
  } else if (max_type == 0 && min_type == 0){ // genap && genap
    if (min == 0){ // jika min = 0, hasil pembagian tidak terdefinisi
      printf("Hasil %d / %d = tidak terdefinisi", max, min);
    } else { // min != 0
      result = (float) max / (float) min;   // pembagian
      printf("Hasil %d / %d = %.2f\n", max, min, result);
    }
  }
}
