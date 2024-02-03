#include <stdio.h>

int main()
{
    FILE *fp;
    char ch,filename[100];
    int i=0;
    printf("Enter the name of the file\n");
    fflush(stdin);
    gets(filename);
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("File name doesn't exist\n");
        exit(0);
    }
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
        i++;
    }
    char stri[i];
    i=0;
    while(1)
    {
        ch=fegetc(fp);
        if(ch==EOF)
        {
            break;
        }
        stri[i]=ch;
        i++;
    }
    stri[i]='\0';
    printf("File content=\n%s\n",stri);
    while(1)
    {
        
    }
    return 0;
}
