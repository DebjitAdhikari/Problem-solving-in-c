#include <stdio.h>
int main()
{int phy,chm,bio,math,com,total;
float per;
printf("Enter the number of physics:");
scanf("%d",&phy);
printf("Enter the number of chemistry:");
scanf("%d",&chm);
printf("Enter the number of biology:");
scanf("%d",&bio);
printf("Enter the number of math:");
scanf("%d",&math);
printf("Enter the number of comp:");
scanf("%d",&com);
total=phy+chm+bio+math+com;
printf("total number%d\n",total);
per=total/5.0;
if(per>=90){
printf("Your grade is A");
}
else if(per>=80){
printf("Your grade is B");
}
else if(per>=70){
printf("Your grade is C");
}
else if(per>=60){
printf("Your grade is D");
}
else if(per>=40){
printf("Your grade is E");
}
else if(per<40){
printf("Your grade is F");
}
return 0;
}
