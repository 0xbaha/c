#include<stdio.h>

void is_even (int n, int *sum){
	int i;
	*sum = 0;

	for(i = 0; i < 2*n; i++){
		if(i % 2 == 0){
			*sum = *sum + i;
		}
	}
}
void main (){
	int n, sum;

	printf("masukkan bilangan : " );
	scanf("%d", &n);

	is_even(n, &sum);
	printf("%d", sum);
}
