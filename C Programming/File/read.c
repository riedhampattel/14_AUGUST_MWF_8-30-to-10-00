#include<stdio.h>
int main()
{
	FILE *fp1;
	char str[100];
	fp1 = fopen("first.txt","r");
	while(fgets(str,100,fp1))
	{
		printf("%s",str);
	}
	fclose(fp1);
	return 0;
}
