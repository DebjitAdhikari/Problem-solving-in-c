#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	FILE *fr, *fw;
	char filename[10], ch;
	int i=0;
	printf("\n Enter a file name to read:");
	gets(filename);
	fr = fopen(filename,"r");
	if(fr == NULL){
		printf("\n File does not exist");
		exit(0);
	}
	
	printf("\n Enter a file name to write:");
	fflush(stdin);
	gets(filename);
	fw = fopen(filename,"w");
	if(fw == NULL){
		printf("\n File does not exist");
		exit(0);
	}
	while(1){
		ch = fgetc(fr);
		if(ch == EOF){
			break;
		}
		fputc(ch,fw);
	}
	fclose(fr);
	fclose(fw);
	
	return 0;
}