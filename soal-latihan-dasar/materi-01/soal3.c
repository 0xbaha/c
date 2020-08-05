#include<stdio.h>
 int main(){
	 float tinggi, ideal, n = 100;

	 printf("masukan tinggi badan: ");
	scanf("%f", &tinggi);

ideal = (tinggi - n) - ((tinggi - n) * 10 / 100);
printf("berat badan %.2f ideal", ideal);
return 0;

 }
