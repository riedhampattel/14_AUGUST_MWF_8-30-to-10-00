#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("first.txt","a");
	fprintf(fp1,"\nThis is my first line in first file");
	fclose(fp1);
	fp2=fopen("second.txt","a");
	fprintf(fp2,"\nThis is my first line in second file");
	fclose(fp2);
	printf("Operation successful");
	
	return 0;
}
