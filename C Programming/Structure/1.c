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
	s1.roll=101;
	s1.percentage=78.56;
	s1.grade='B';
	
	s2.roll=102;
	s2.percentage=98.56;
	s2.grade='A';
	
	printf("\nStudent 1 details := ");
	printf("\nStudent's roll no. = %d",s1.roll);
	printf("\nStudent's percentage = %.2f",s1.percentage);
	printf("\nStudent's grade = %c",s1.grade);
	
	printf("\nStudent 2 details := ");
	printf("\nStudent's roll no. = %d",s2.roll);
	printf("\nStudent's percentage = %.2f",s2.percentage);
	printf("\nStudent's grade = %c",s2.grade);
	
	return 0;
}
