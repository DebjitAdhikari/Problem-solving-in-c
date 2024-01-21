#include <stdio.h>

int main()
{
    int notes,n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
    printf("Enter the amount of notes\n");
    scanf("%d",&notes);
    n2000=notes/2000;
    notes=notes%2000;
    n500=notes/500;
    notes=notes%500;
    n200=notes/200;
    notes=notes%200;
    n100=notes/100;
    notes=notes%100;
    n50=notes/50;
    notes=notes%50;
    n20=notes/20;
    notes=notes%20;
    n10=notes/10;
    notes=notes%10;
    n5=notes/5;
    notes=notes%5;
    n2=notes/2;
    notes=notes%2;
    n1=notes/1;
    notes=notes%1;
    printf("\n2000n=%d\n500n=%d\n200n=%d\n100n=%d\n50n=%d\n20n=%d\n10n=%d\n5n=%d\n2n=%d\n1n=%d\n",n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1);
    return 0;
}
