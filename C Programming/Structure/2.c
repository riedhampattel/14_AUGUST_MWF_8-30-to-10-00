#include<stdio.h>
struct Student
{
	int roll;
	float percentage;
	char grade;
};
int main()
{
	struct Student s1,s2;
	printf("\nEnter the value of student 1 := ");
	printf("\nEnter the roll no. = ");
	scanf("%d",&s1.roll);
	printf("\nEnter the percentage = ");
	scanf("%f",&s1.percentage);
	printf("\nEnter the grade = ");
	scanf(" %c",&s1.grade);
	
	printf("\nEnter the value of student 2 := ");
	printf("\nEnter the roll no. = ");
	scanf("%d",&s2.roll);
	printf("\nEnter the percentage = ");
	scanf("%f",&s2.percentage);
	printf("\nEnter the grade = ");
	scanf(" %c",&s2.grade);
	
	printf("\n\nDetails of student 1 := ");
	printf("\nStudent's roll no. = %d",s1.roll);
	printf("\nStudent's percentage = %.2f",s1.percentage);
	printf("\nStudent's grade = %c",s1.grade);
	
	printf("\n\nDetails of student 2 := ");
	printf("\nStudent's roll no. = %d",s2.roll);
	printf("\nStudent's percentage = %.2f",s2.percentage);
	printf("\nStudent's grade = %c",s2.grade);
	
	return 0;
}
