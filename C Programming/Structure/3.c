#include<stdio.h>
struct Student
{
	int roll;
	float percentage;
	char grade;
};
int main()
{
	struct Student s[100];
	int count,i;
	printf("\nEnter the count of students = ");
	scanf("%d",&count);
	
	for(i=0;i<count;i++)
	{
		printf("\n\nEnter the details of student %d",i+1);
		printf("\nEnter the roll no. = ");
		scanf("%d",&s[i].roll);	
		printf("\nEnter the percentage = ");
		scanf("%f",&s[i].percentage);
		printf("\nEnter the grade = ");
		scanf(" %c",&s[i].grade);
	}	
	
	for(i=0;i<count;i++)
	{
		printf("\n\nDetails of student %d",i+1);
		printf("\nStudent's roll no. = %d",s[i].roll);
		printf("\nStudent's percentage = %.2f",s[i].percentage);
		printf("\nStudent's grade = %c",s[i].grade);
	}
	
	return 0;
}
