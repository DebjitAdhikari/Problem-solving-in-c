#include<stdio.h>
#ibnclude<stdlib.h>
int main(){
	FILE *fp;
	char filename[10], ch, str[100];
	int i=0;
	printf("\n Enter a file name:");
	gets(filename);
	fp = fopen(filename,"r");
	if(fp == NULL){
		printf("\n File does not exist");
		exit(0);
	}
	while(1){
		ch = fgetc(fp);
		if(ch == EOF){
			break;
		}
		str[i] = ch;
		i++;
	}
	str[i] = '\0';
	printf("\n File content: %s",str);
	int noa=0,nod=0,nosc=0,nov=0;
	char vowel[] = "aeiouAEIOU";
	i=0;
	while(str[i]!='\0'){
		ch = str[i];
		if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
			noa++;
		else if(ch>=48 && ch<=57)
			nod++;
		else
			nosc++;
		for(int j=0;j<10;j++){
			if(ch == vowel[j]){
				nov++;
			}
		}
		i++;
	}
	printf("\n Number of alphabets = %d",noa);
	printf("\n Number of digits = %d",nod);
	printf("\n Number of vowels = %d",nov);
	printf("\n Number of consonent = %d",noa-nov);
	printf("\n Number of special characters = %d",nosc);
	return 0;
}
