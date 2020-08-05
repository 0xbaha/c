#include <stdio.h>

void main(){
  /* DEKLARASI */

  /* Variabel Global */
  long long number,temp,digit,remainder;
  long long reversed = 0;
  int sumDigit = 0, sumDigit_reversed = 0, flag = 0;
  int lastDigit_type, sumDigit_type;

  /* PROGRAM UTAMA */
  // baca masukan dari user
  puts("Bilangan:");
  scanf("%lld", &number);

  // periksa jumlah digit
  temp = number;
  while (temp != 0){
    temp /= 10;
    ++sumDigit;
  }

  // periksa jenis bilangan pada jumlah digit
  temp = sumDigit;
  if (temp % 2 == 0){  // nilai temp habis dibagi 2
    sumDigit_type = 0; // bilangan genap
  } else {
    sumDigit_type = 1; // bilangan ganjil
  }

  // periksa jenis bilangan pada digit terakhir
  //   lastDigit_type = 1 jika ganjil
  //   lastDigit_type = 0 jika genap
  temp = number % 10;
  if (temp % 2 == 0){ // nilai temp habis dibagi 2
    lastDigit_type = 0; // bilangan genap
  } else {
    lastDigit_type = 1; // bilangan ganjil
  }

  // membalikkan bilangan (misal: 12345 menjadi 54321)
  temp = number;
  while (temp !=0){
    remainder = temp % 10;
    reversed = reversed * 10 + remainder;
    temp /= 10;
  }

  // periksa jumlah digit bilangan yg dibalik (misal: 54321 berarti 5)
  temp = reversed;
  while (temp != 0){
    temp /= 10;
    ++sumDigit_reversed;
  }

  // cek jumlah digit awal dan setelah dibalik
  // jika beda, ubah flag menjadi 1
  if (sumDigit != sumDigit_reversed){
    flag = 1;
  }

  // konversi angka menjadi kata
  //   jika jumlah digit = ganjil, maka pakai bahasa Inggris
  //   jika jumlah digit = genap , maka pakai bahasa Indonesia
  //   jika digit terakhir = ganjil, maka pakai huruf kapital
  //   jika digit terakhir = genap , maka pakai hufur kecil
  printf("Konversi : ");
  if (sumDigit_type == 1 && lastDigit_type == 1){ // EN dan kapital
    temp = reversed;
    while (temp != 0){
      digit = temp % 10;
      switch (digit) {
        case 0: printf("ZERO"); break;
        case 1: printf("ONE"); break;
        case 2: printf("TWO"); break;
        case 3: printf("THREE"); break;
        case 4: printf("FOUR"); break;
        case 5: printf("FIVE"); break;
        case 6: printf("SIX"); break;
        case 7: printf("SEVEN"); break;
        case 8: printf("EIGHT"); break;
        case 9: printf("NINE"); break;
      }
      printf(" ");
      temp /= 10;
    }
    // jika flag=1, tambah "nol" sebanyak selisih sumDigit & sumDigit_reversed
    if (flag == 1){
      temp = sumDigit-sumDigit_reversed;
      for (int i = 0; i < temp; i++)
      printf("ZERO ");
    }
    printf("\n");
  } else if (sumDigit_type == 1 && lastDigit_type == 0){ // EN dan kecil
    temp = reversed;
    while (temp != 0){
      digit = temp % 10;
      switch (digit) {
        case 0: printf("zero"); break;
        case 1: printf("one"); break;
        case 2: printf("two"); break;
        case 3: printf("three"); break;
        case 4: printf("four"); break;
        case 5: printf("five"); break;
        case 6: printf("six"); break;
        case 7: printf("seven"); break;
        case 8: printf("eight"); break;
        case 9: printf("nine"); break;
      }
      printf(" ");
      temp /= 10;
    }
    // jika flag=1, tambah "nol" sebanyak selisih sumDigit & sumDigit_reversed
    if (flag == 1){
      temp = sumDigit-sumDigit_reversed;
      for (int i = 0; i < temp; i++)
      printf("zero ");
    }
    printf("\n");
  } else if (sumDigit_type == 0 && lastDigit_type == 1){ // ID dan kapital
    temp = reversed;
    while (temp != 0){
      digit = temp % 10;
      switch (digit) {
        case 0: printf("NOL"); break;
        case 1: printf("SATU"); break;
        case 2: printf("DUA"); break;
        case 3: printf("TIGA"); break;
        case 4: printf("EMPAT"); break;
        case 5: printf("LIMA"); break;
        case 6: printf("ENAM"); break;
        case 7: printf("TUJUH"); break;
        case 8: printf("DELAPAN"); break;
        case 9: printf("SEMBILAN"); break;
      }
      printf(" ");
      temp /= 10;
    }
    // jika flag=1, tambah "nol" sebanyak selisih sumDigit & sumDigit_reversed
    if (flag == 1){
      temp = sumDigit-sumDigit_reversed;
      for (int i = 0; i < temp; i++)
      printf("NOL ");
    }
    printf("\n");
  } else if (sumDigit_type == 0 && lastDigit_type == 0){ // ID dan kecil
    temp = reversed;
    while (temp != 0){
      digit = temp % 10;
      switch (digit) {
        case 0: printf("nol"); break;
        case 1: printf("satu"); break;
        case 2: printf("dua"); break;
        case 3: printf("tiga"); break;
        case 4: printf("empat"); break;
        case 5: printf("lima"); break;
        case 6: printf("enam"); break;
        case 7: printf("tujuh"); break;
        case 8: printf("delapan"); break;
        case 9: printf("sembilan"); break;
      }
      printf(" ");
      temp /= 10;
    }
    // jika flag=1, tambah "nol" sebanyak selisih sumDigit & sumDigit_reversed
    if (flag == 1){
      temp = sumDigit-sumDigit_reversed;
      for (int i = 0; i < temp; i++)
      printf("nol ");
    }
    printf("\n");
  }

}
