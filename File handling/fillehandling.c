#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
    int alphabet=0,digit=0,special=0,space=0;
	char filename[10], ch;
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
        if((ch>=65 && ch<=90)||(ch>=97&&ch<=122))
        {
            alphabet++;
        }
        else if (ch>='0'&&ch<='9')
        {
            digit++;
        }
        else if(ch==' ')
        {
            space++;
        }
        else
        {
            special++;
        }
		printf("%c",ch);
	}
    printf("Number of alphabet %d\n Digit %d\n Space %d\n Special character %d\n",alphabet,digit,space,special);
}
