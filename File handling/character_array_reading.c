#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fil;
    char name[20],ch;
    int i,n=0,alphabet=0,vowel=0,consonant=0,digit=0,space=0,special=0;
    printf("Enter the name of the file\n");
    gets(name);
    fil=fopen(name,"r");
    if(fil==NULL)
    {
        printf("The file name does not exist");
        exit(0);
    }
    while(1)
    {
        ch=fgetc(fil);
        if(ch==EOF)
        {
            break;
        }
        n++;
    }
    char a[n];
    i=0;
    while(1)
    {
       a[i]=fgetc(fil);
        if(a[i]==EOF)
        {
            break;
        }
    }
    i=0;
    while(1)
    {
        //a[i]=fgetc(fil);
        if(a[i]==NULL)
        {
            break;
        }
        else if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
        {
            alphabet++;
            if(a[i]=='A'||a[i]=='a'||a[i]=='E'||a[i]=='e'||a[i]=='I'||a[i]=='i'||a[i]=='O'||a[i]=='o'||a[i]=='U'||a[i]=='u')
                {
                    vowel++;
                }
            else
                {
                    consonant++;
                }
            
        }
        else if(a[i]>='0'&&a[i]<='9')
        {
            digit++;
        }
        else if(a[i]==' ')
        {
            space++;
        }
        else
        {
            special++;
        }
        printf("%c",a[i]);
        i++;
    }
    printf("In the file number of\nAlphabet = %d\nVowel = %d\nConsonant = %d\nDigit = %d\nSpace = %d\nSpecial Character = %d\n",alphabet,vowel,consonant,digit,space,special);
    return 0;
}
