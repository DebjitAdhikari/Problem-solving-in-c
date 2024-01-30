//9. Write a C program to count frequency of each element in an array.
#include<stdio.h>

int main(){
	int i, j,max,a[5]={1,2,1,3,3};
max=a[0];
for(i=0;i<5;i++)
{
 if(a[i]>max)
{
max=a[i];
}
}

int frq;
frq[max+1]={0};
for(i=0;i<5;i++)
{
 frq[a[i]]++;
}
for(i=0;i<max+1;i++)
{
if(frq[i]>0)
{
printf("%d frequency is %d",i,frq[i]);
}
}


	return 0;
}