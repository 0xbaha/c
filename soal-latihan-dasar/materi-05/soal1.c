#include<stdio.h>
#include<string.h>

char nextday(char day[]);
int main(){
	char hari[10];
	int tmp;

	printf("masukan hari sekarang : ");
	scanf("%s", &hari);

	tmp = nextday(hari);

	if(tmp == 1){
		printf("selasa");
	}else if(tmp == 2){
		printf("rabu");
	}else if(tmp == 3){
		printf("kamis");
	}else if(tmp == 4){
		printf("jumat");
	}else if(tmp == 5){
		printf("sabtu");
	}else if(tmp == 6){
		printf("minggu");
	}else if(tmp == 7){
		printf("senin");
	}
}
char nextday(char day[]){

	if(strcmp(day,"senin")==0){
		day = 1;
	}else if (strcmp(day,"selasa")==0){
		day = 2;
	}else if(strcmp(day,"rabu")==0){
		day = 3;
	}else if(strcmp(day,"kamis")==0){
		day = 4;
	}else if(strcmp(day,"jumat")==0){
		day = 5;
	}else if(strcmp(day,"sabtu")==0){
		day = 6;
	}else if(strcmp(day,"minggu")==0){
		day = 7;
	}

	return day;
}
