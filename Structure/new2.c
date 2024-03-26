#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student {
	int rollno;
	char name[30];
	char dept[30];
	float marks;
}stype;

void inputData(stype s[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n Enter roll number:");
		scanf("%d",&s[i].rollno);
		printf("\n Enter Name:");
		fflush(stdin);
		gets(s[i].name);
		printf("\n Enter department:");
		fflush(stdin);
		gets(s[i].dept);
		printf("\n Enter marks:");
		scanf("%f",&s[i].marks);
	}
}

void printStudent(stype s[], int i){
	printf("\n Roll No	Name \t Department\t Marks");
	printf("\n %d\t\t %s \t\t %s \t\t %.2f", s[i].rollno, s[i].name, s[i].dept, s[i].marks);
}

void printBCAstudents(stype s[], int n){
	int i;
	for(i=0;i<n;i++){
		if(strcmp(s[i].dept, "BCA") == 0){
			printStudent(s,i);
		}
	}
}

void show8090students(stype s[], int n){
    for(int i=0;i<n;i++)
    {
        if(s[i].marks>=80&&s[i].marks<=90)
        {
            printStudent(s,i);
        }
    }
	
}
				
void showStudentsMarks(stype s[], int n){
    int i,j;
	stype temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(s[j].marks<s[j+1].marks){
				temp=s[j];
				s[j] = s[j+1];
				s[j+1] =temp;
			}
		}
	}
	
}
		
void showStudentsName(stype s[], int n){
	int i,j;
	char temp[20];
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(strcmp(s[j].name, s[j+1].name) > 0){
				strcpy(temp, s[j].name);
				strcpy(s[j].name, s[j+1].name);
				strcpy(s[j+1].name, temp);
			}
		}
	}
}
			
void showStudentsRoll(stype s[], int n, int roll){
	for(int i=0;i<n;i++)
   {
      if(s[i].rollno==roll)
      {
        printStudent(s,i);
      }
   }

}
					
int main(){
	int n,x,i,roll;
	printf("\n How many students:");
	scanf("%d",&n);
	stype s[n];
	while(1){
		printf("\n Press 1 to enter the details of students");
		printf("\n Press 2 to display all students");
		printf("\n Press 3 to display the details of students with department is BCA");
		printf("\n Press 4 to display the details of students with marks>=80 and <=90");
		printf("\n Press 5 to arrange the student details in decresing order of marks");
		printf("\n Press 6 to arrange the student details in alphabetic order of name");
		printf("\n Press 7 to display details of a student whose roll number is given");
		printf("\n Press 8 to exit");
		scanf("%d",&x);
		switch(x){
			case 1:
					inputData(s,n);
					break;
			case 2:
					for(i=0;i<n;i++){
						printStudent(s,i);
					}
					break;
			case 3:
					printBCAstudents(s,n);
					break;
			case 4:
					show8090students(s,n);
					break;
			case 5:
					showStudentsMarks(s,n);
					break;
			case 6:
					showStudentsName(s,n);
					break;
			case 7:
					printf("\n Enter a roll no:");
					scanf("%d",&roll);
					showStudentsRoll(s,n,roll);
					break;
			case 8:
					exit(0);
		}
	}
	return 0;
}