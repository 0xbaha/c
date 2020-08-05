#include <stdio.h>

/* DEKLARASI */

/* Variabel Global */
long long bilangan_biner;
int bilangan_desimal;
int LastTwoDigits;
int L_rectangle, W_rectangle;

/* Prosedur dan Fungsi */
void LineBreak(int length);
void DrawRectangle(int length, int width);
int countPow(int base, int exponent);
int convertBinaryToDecimal(long long binerNumber);
int showTwoDigits(int decimalNumber);

/* PROGRAM UTAMA */
void main(){
  // proses membaca masukan dari pengguna
  LineBreak(30); // garis pembatas
  puts("Bilangan biner  : ");
  scanf("%lld", &bilangan_biner); // input dari user
  LineBreak(30); // garis pembatas

  // menampilkan hasil konversi biner ke desimal
  bilangan_desimal = convertBinaryToDecimal(bilangan_biner);
  printf("Bilangan desimal: %d\n", bilangan_desimal);

  // menampilkan dua digit terakhir dari bilangan desimal
  LastTwoDigits = showTwoDigits(bilangan_desimal);
  printf("Dua digit akhir : %d\n", LastTwoDigits);
  LineBreak(30); // garis pembatas

  // menampilkan persegi panjang
  L_rectangle = LastTwoDigits / 10;
  W_rectangle = LastTwoDigits % 10;
  printf("Persegi panjang ukuran %d x %d\n", L_rectangle, W_rectangle);
  DrawRectangle(W_rectangle,L_rectangle);
}

/******************************** SUB-PROGRAM ********************************/
void DrawRectangle(int length, int width){
// Name   : DrawRectangle
// Input  : length, width
// Output : gambar persegi panjang (tanpa isi)
// Process:
//   1. Menggambar persegi panjang dengan ukuran:
//      panjang (length) dan lebar (width)
//   2. Dihasilkan gambar persegi panjang (tanpa isi)
  /* Algoritma */
  for (int i = 0; i < length; i++){
    if (i == 0 || i == length-1){
      for (int j = 0; j < width; j++){
        printf("*");
      }
    } else {
      for (int j = 0; j < width; j++){
        if (j == 0 || j == width-1){
          printf("*");
        } else {
          printf(" ");
        }
      }
    }
    printf("\n");
  }
}
// ----------------------------------------------------------------------------
int showTwoDigits(int decimalNumber){
// Name   : showTwoDigits
// Input  : decimalNumber
// Output : result
// Process:
//   1. Menampilkan dua digit terakhir dari input
//   2. Dihasilkan dua digit terakhir dari input (decimalNumber)
  /* Variabel Lokal */
  int result = 0;
  int i = 0;
  int remainder;

  /* Algoritma */
  if (decimalNumber / 10 != 0){
    while (i < 2){
      remainder = (decimalNumber % 10) * countPow(10,i);
      decimalNumber /= 10;
      result += remainder;
      ++i;
    }
  } else { // decimalNumber / 10 == 0
    result = decimalNumber;
  }
  return result;
}
// ----------------------------------------------------------------------------
int convertBinaryToDecimal(long long binerNumber){
// Name   : convertBinaryToDecimal
// Input  : binerNumber
// Output : decimalNumber
// Process:
//   1. Konversi bilangan biner menjadi desimal
//   2. Dihasilkan bilangan desimal dari konversi bilangan input (binerNumber)
  /* Variabel Lokal */
  int decimalNumber = 0;
  int i = 0;
  int remainder;

  /* Algoritma */
  while (binerNumber != 0){
    remainder = binerNumber % 10;
    binerNumber /= 10;
    decimalNumber += remainder * countPow(2,i);
    ++i;
  }
  return decimalNumber;
}
// ----------------------------------------------------------------------------
long long convertDecimalToBinary(int decimalNumber){
// Name   : convertDecimalToBinary
// Input  : decimalNumber
// Output : binerNumber
// Process:
//   1. Konversi bilangan desimal menjadi biner
//   2. Dihasilkan bilangan biner dari konversi bilangan input (decimalNumber)
  /* Variabel Lokal */
  long long binerNumber = 0;
  int i = 0;
  int remainder;

  /* Algoritma */
  while (decimalNumber != 0){
    remainder = decimalNumber % 2;
    decimalNumber /= 2;
    binerNumber += remainder * countPow(10,i);
    ++i;
  }
  return binerNumber;
}
// ----------------------------------------------------------------------------
int countPow(int base, int exponent){
// Name   : countPow
// Input  : base, exponent
// Output : result
// Process:
//   1. Menghitung pangkat suatu bilangan
//   2. Bilangan dasar (base): bilangan yang akan dihitung nilai pangkatnya
//   3. Bilangan pangkat (exponent): jumlah perkalian dilakukan bilangan dasar
  /* Variabel Lokal */
  long long result = 1;

  /* Algoritma */
  while (exponent != 0){
    result *= base;
    --exponent;
  }
  return result;
}
// ----------------------------------------------------------------------------
void LineBreak(int length){
// Name   : LineBreak
// Input  : length
// Output : garis horizontal dengan simbol sama dengan (=)
// Process:
//   1. Menuliskan simbol sama dengan (=) sebanyak nilai length
//   2. Dihasilkan simbol sama dengan sebanyak nilai length
  /* Algoritma */
  for(int i = 0; i < length; i++){
    printf("=");
  }
  printf("\n");
}
