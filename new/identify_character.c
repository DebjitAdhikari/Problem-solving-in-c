#include <stdio.h>

int main()
{
    int ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    if((ch>=65&&ch<=90))
    {
        if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
        {
            printf("Upper case Vowel");
        }
        else{
            printf("Upper case consonant");
        }
    }
    else if(ch>=97 && ch<=122)
    {  if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
        {
            printf("Lower case Vowel");
        }
        else{
            printf("Lower case Consonant");
        }
    }
    else if(ch>=48 && ch<=57) {
            printf("Digit");
    }
        else{
            printf("Special character");
        }
    
    return 0;
}
