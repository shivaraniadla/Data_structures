/*Program to understand how structure members used as function arguments*/
#include<stdio.h>
#include<string.h>
struct student {
	char name[20];
	int rollno;
	int marks;
	};
void display (char name[], int rollno, int marks);
void main()
{
	struct student stu1 = {"John" , 12,87};
	struct student stu2;
	strcpy(stu2.name, "Mary");
	stu2.rollno = 18;
	stu2.marks = 90;
	display(stu1.name, stu1.rollno, stu1.marks);
	display(stu2.name, stu2.rollno, stu2.marks);
}
void display(char name[], int rollno, int marks)
{
	printf( "\nName -%s\n", name);
	printf("\nRollno - %d\n", rollno);
	printf ("\nMarks - %d\n", marks);
}
