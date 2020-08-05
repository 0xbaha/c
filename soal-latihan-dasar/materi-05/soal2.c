#include<stdio.h>
#include<string.h>

char lastday(char day[]);

int main ()
{
	char hari[10];
	printf("Masukan Nama Hari :");
	scanf("%s", &hari);

	int temp = lastday(hari);
	if(temp == 1){
		printf("minggu");}
	else if(temp == 2){
		printf("senin");}
	else if(temp == 3){
		printf("selasa");}
	else if(temp == 4){
		printf("rabu");}
	else if(temp == 5){
		printf("kamis");}
	else if(temp == 6){
		printf("jumat");}
	else if(temp == 7){
		printf("sabtu");}
}
char lastday(char day[]){
	if(strcmp(day,"senin")==0){
		day = 1;}
	else if(strcmp(day,"selasa")==0){
		day = 2;}
	else if(strcmp(day,"rabu")==0){
		day = 3;}
	else if(strcmp(day,"kamis")==0){
		day = 4;}
	else if(strcmp(day,"jumat")==0){
		day = 5;}
	else if(strcmp(day,"sabtu")==0){
		day = 6;}
	else if(strcmp(day,"minggu")==0){
		day = 7;}
	return day;

}
