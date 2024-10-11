#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1 = fopen("first.txt","w");
	fp2 = fopen("second.txt","w");
	fprintf(fp1,"This is my new file");
	fclose(fp1);
	fprintf(fp2,"This is my old file");
	fclose(fp2);
	printf("\nOperation successful");
	
	return 0;	
}
