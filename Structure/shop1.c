#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct product{
    char type[20];
    char name[20];
    int piece;
    int quantity;
    int sellprice;
    int boughtprice;
    int accno;
}stype;
void additem(stype p[],int i);
void addsoliditem(stype p[],int i);
void addliquiditem(stype p[],int i);
void adddustitem(stype p[],int i);
void printsoliditem(stype p[],int i);
void printliquiditem(stype p[],int i);
void printdustitem(stype p[],int i);
void allitems(stype p[],int i);
void checkitems(stype p[],char name[],int item);
int totalamount(stype p[],int item);
int buyitem(stype p[],char name[],int item);
int buysoliditem(stype p[],int i);
int buyliquiditem(stype p[],int i);
int buydustitem(stype p[],int i);
int seeprofit(stype p[],int finalamount,int item);
int main()
{
    stype p[100];
    int x,total,bought=0,finalamount=0,item=0;
    char name[20],name1[20];
    while(1)
    {
        printf("\nPress 1 to add a new item\n");
        printf("Press 2 to see details of all items\n");
        printf("Press 3 to total amount of money you have invested\n");
        printf("Press 4 to check any items by its name\n");
        printf("Press 5 to buy any items\n");
        printf("Press 6 to see profit of your shop\n");
        scanf("%d",&x);
        switch (x)
        {
            case 1:
                    additem(p,item);
                    item++;
                    break;
            case 2:
                    for(int i=0;i<item;i++)
                    {
                        allitems(p,i);
                    }
                    break;
            case 3:
                
                    total=totalamount(p,item);
                    printf("Total amount invested = %d\n",total);
                    break;
            case 4:
                    printf("Enter the name of the item\n");
                    fflush(stdin);
                    gets(name);
                    checkitems(p,name,item);
                    break;  
            case 5:
                    bought = 0;
                    printf("Enter the name item that you wanna buy\n");
                    fflush(stdin);
                    gets(name1);
                    bought = buyitem(p,name1,item);
                    printf("Total amount to pay - %d\n",bought);
                    break;
            case 6:
                    finalamount=finalamount+bought;
                    seeprofit(p,finalamount,item);
                    bought = 0;
                    break;
        }
    }
    return 0;
}
void additem(stype p[],int i)
{
    char product[20];
    printf("Enter the type of the product (SOLID/LIQUID/DUST)\n");
    fflush(stdin);
    gets(product);
    if(strcmp(product,"SOLID")==0||strcmp(product,"Solid")==0)
    {
        addsoliditem(p,i);
    }
    else  if(strcmp(product,"LIQUID")==0||strcmp(product,"Liquid")==0)
    {
        addliquiditem(p,i);
    }
    else if(strcmp(product,"DUST")==0||strcmp(product,"dust")==0)
    {
        adddustitem(p,i);
    }
}
void addsoliditem(stype p[],int i)
{
    printf("\nEnter the details of the product\n");
    printf("TYPE - ");
    fflush(stdin);
    gets(p[i].type);
    printf("\nNAME - ");
    fflush(stdin);
    gets(p[i].name);
    printf("\nACCESSION NUMBER - ");
    scanf("%d",&p[i].accno);
    printf("\nNUMBER OF PIECES/PACKETS - ");
    scanf("%d",&p[i].piece);
    printf("\nBUYING PRICE PER PIECE/PACKET (in $) - ");
    scanf("%d",&p[i].boughtprice);
    printf("\nSELL PRICE PER PIECE/PACKET (in $) - ");
    scanf("%d",&p[i].sellprice);
}
void addliquiditem(stype p[],int i)
{
    printf("\nEnter the details of the product\n");
    printf("TYPE - ");
    fflush(stdin);
    gets(p[i].type);
    printf("\nNAME - ");
    fflush(stdin);
    gets(p[i].name);
    printf("\nACCESSION NUMBER - ");
    scanf("%d",&p[i].accno);
    printf("\nTOTAL QUANTITY (in LITRES)- ");
    scanf("%d",&p[i].quantity);
    printf("\nBUYING PRICE PER LITRE (in $) - ");
    scanf("%d",&p[i].boughtprice);
    printf("\nSELL PRICE PER LITRE (in $)- ");
    scanf("%d",&p[i].sellprice);
}
void adddustitem(stype p[],int i)
{
    printf("\nEnter the details of the product\n");
    printf("TYPE - ");
    fflush(stdin);
    gets(p[i].type);
    printf("\nNAME - ");
    fflush(stdin);
    gets(p[i].name);
    printf("\nACCESSION NUMBER - ");
    scanf("%d",&p[i].accno);
    printf("\nTOTAL QUANTITY (in GRAM) - ");
    scanf("%d",&p[i].quantity);
    printf("\nBUYING PRICE PER GRAM (in $) - ");
    scanf("%d",&p[i].boughtprice);
    printf("\nSELL PRICE PER GRAM (in $)- ");
    scanf("%d",&p[i].sellprice);
}
void printsoliditem(stype p[],int i)
{
    printf("\n____________");
    printf("\nTYPE - %s",p[i].type);
    printf("\nNAME - %s",p[i].name);
    printf("\nACCESSION NUMBER - %d",p[i].accno);
    printf("\nNUMBER OF PIECES/PACKETS AVAILABLE - %d",p[i].piece);
    printf("\nPRICE PER PIECE/PACKET(in $) - %d",p[i].sellprice);
}
void printliquiditem(stype p[],int i)
{
    printf("\n____________");
    printf("\nTYPE - %s",p[i].type);
    printf("\nNAME - %s",p[i].name);
    printf("\nACCESSION NUMBER - %d",p[i].accno);
    printf("\nTOTAL LITRES AVAILABLE - %d",p[i].quantity);
    printf("\nPRICE PER LITRE (in $) - %d",p[i].sellprice);
}
void printdustitem(stype p[],int i)
{
    printf("\n____________");
    printf("\nTYPE - %s",p[i].type);
    printf("\nNAME - %s",p[i].name);
    printf("\nACCESSION NUMBER - %d",p[i].accno);
    printf("\nTOTAL GRAMS AVAILABLE - %d",p[i].quantity);
    printf("\nPRICE PER GRAMS (in $) - %d",p[i].sellprice);
}
void allitems(stype p[],int i)
{
    if(strcmp(p[i].type,"SOLID")==0||strcmp(p[i].type,"Solid")==0)
    {
        printsoliditem(p,i);
    }
     else  if(strcmp(p[i].type,"LIQUID")==0||strcmp(p[i].type,"Liquid")==0)
    {
        printliquiditem(p,i);
    }
    else if(strcmp(p[i].type,"DUST")==0||strcmp(p[i].type,"dust")==0)
    {
        printdustitem(p,i);
    }
}
void checkitems(stype p[],char name[],int item)
{
    for(int i=0;i<item;i++)
    {
        if(strcmp(p[i].name,name)==0)
        {
            allitems(p,i);
        }
        else 
        {
            printf("Item is not found\n");
        }
    }
}
int totalamount(stype p[],int item)
{
    int total=0;
    for(int i=0;i<item;i++)
    {
        if(strcmp(p[i].type,"SOLID")==0||strcmp(p[i].type,"Solid")==0)
    {
        total=total+((p[i].piece)*(p[i].boughtprice));
    }
    else  if(strcmp(p[i].type,"LIQUID")==0||strcmp(p[i].type,"Liquid")==0)
    {
        total=total+((p[i].quantity)*(p[i].boughtprice));
    }
    else if(strcmp(p[i].type,"DUST")==0||strcmp(p[i].type,"dust")==0)
    {
        total=total+((p[i].quantity)*(p[i].boughtprice));
    }
    }
    return total;
}
int buyitem(stype p[],char name1[],int item)
{
    int total;
    for(int i=0;i<item;i++)
    {
        if(strcmp(p[i].name,name1)==0)
        {
            if(strcmp(p[i].type,"SOLID")==0||strcmp(p[i].type,"Solid")==0)
            {
                total=buysoliditem(p,i);
            }
            else if(strcmp(p[i].type,"LIQUID")==0||strcmp(p[i].type,"liquid")==0)
            {
                total=buyliquiditem(p,i);
            }
            else if(strcmp(p[i].type,"DUST")==0||strcmp(p[i].type,"Dust")==0)
            {
                total=buydustitem(p,i);
            }
        }
        else 
        {
            printf("Item not found\n");
        }
    }
    return total;
}
int buysoliditem(stype p[],int i)
{
    int amount,pieces;
    printsoliditem(p,i);
    printf("\nEnter how many packets you wanna buy\n");
    scanf("%d",&pieces);
    p[i].piece=(p[i].piece)-pieces;
    amount=pieces*(p[i].sellprice);
    return amount;
}
int buyliquiditem(stype p[],int i)
{
    int amount,litres;
    printliquiditem(p,i);
    printf("\nEnter how much litres you wanna buy\n");
    scanf("%d",&litres);
    p[i].piece=(p[i].piece)-litres;
    amount=litres*(p[i].sellprice);
    return amount;
}
int buydustitem(stype p[],int i)
{
    int amount,gms;
    printliquiditem(p,i);
    printf("\nEnter how much grams you wanna buy\n");
    scanf("%d",&gms);
    p[i].quantity=(p[i].quantity)-gms;
    amount=gms*(p[i].sellprice);
    return amount;
}
int seeprofit(stype p[],int finalamount,int item)
{
    int profit,total;
    total=totalamount(p,item);
    profit=finalamount-total;
    if(profit>0)
    {
        printf("Your total profit is - %d$\n",profit);
    }
    else 
    {
        printf("Haven't got profit yet\n");
    }
}