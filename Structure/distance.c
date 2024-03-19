#include <stdio.h>
struct distance{
int feet;
int inch;
};
int main()
{
    struct distance d[10];
    printf("Etner the distance of 1st object\n");
    printf("Feet\n");
    scanf("%d",&d[1].feet);
    printf("Inch\n");
    scanf("%d",&d[1].inch);
    printf("Etner the distance of 2nd object\n");
    printf("Feet\n");
    scanf("%d",&d[2].feet);
    printf("Inch\n");
    scanf("%d",&d[2].inch);
    d[3].feet=d[1].feet+d[2].feet;
    d[3].inch=d[1].inch+d[2].inch;
    if(d[3].inch>=12)
    {
      d[3].feet+=d[3].inch/12;
      d[3].inch=d[3].inch%12;
    }
    printf("Total distace\n");
    printf("Feet %d\n",d[3].feet);
    printf("Inch %d\n",d[3].inch);
    return 0;
}
