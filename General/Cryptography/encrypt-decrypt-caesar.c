/* File : encrypt-decrypt-caesar.c
   Program sederhana untuk enkripsi dan dekripsi string menggunakan algoritma
   kriptografi Caesar.
   Referensi tabel ASCII: http://www.asciitable.com/
*/

#include <stdio.h>

int main(){
  // deklarasi konstanta
  const int kunci = 4;
  const int jumlah_alfabet = 26;
  const int ascii_spasi = 32;

  // deklarasi variabel
  int i;
  int pilihan; // mode enkripsi atau dekripsi
  char str[100];

  // input
  printf("Masukkan string: ");
  gets(str);

  printf("Pilih mode yang diinginkan:\n");
  printf("  1 = Enkripsi\n");
  printf("  2 = Dekripsi\n");
  printf("Pilihan? ");
  scanf("%d", &pilihan);

  // algoritma (proses)
  switch (pilihan) {
    case 1:
      for (i = 0; (i < 100 && str[i] != '\0'); i++){
        // kunci untuk enkripsi ditambahkan terhadap nilai ASCII
        // (kecuali spasi, tidak dienkripsi)
        if (str[i] != ascii_spasi){
          str[i] = str[i] + kunci;
          // apakah hasil penjumlahan melewati nilai ASCII untuk alfabet?
          // jika iya, maka hasil penjumlahan dikurangi dengan jumlah_alfabet
          if ((str[i] > 90 && str[i] < 97) || (str[i] > 123))
            str[i] = str[i] - jumlah_alfabet;
        }
      }
      printf("Hasil Enkripsi: %s\n", str);
      break;
    case 2:
      for (i = 0; (i < 100 && str[i] != '\0'); i++){
        // kunci untuk dekripsi dikurangin terhadap nilai ASCII
        // (kecuali spasi, tidak didekripsi)
        if (str[i] != ascii_spasi){
          str[i] = str[i] - kunci;
          // apakah hasil pengurangan melewati nilai ASCII untuk alfabet?
          // jika iya, maka hasil pengurangan ditambahkan dengan jumlah_alfabet
          if ((str[i] > 90 && str[i] < 97) || (str[i] < 65))
            str[i] = str[i] + jumlah_alfabet;
        }
      }
      printf("Hasil Dekripsi: %s\n", str);
      break;
    default:
      printf("Error!\n");
  }

  return 0;
}
