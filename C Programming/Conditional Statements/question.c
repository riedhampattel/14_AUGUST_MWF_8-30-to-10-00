//Write a c program to take positive numbers from the user untill user enteres -1 and display sum, average, minimum and maximum and count of all numbers.
#include<stdio.h>
int main()
{
    int num,sum=0,min=32767,max=0,count=0;
    float avg;
    start :
    printf("\nEnter any positive number to continue and -1 to exit = ");
    scanf("%d",&num);
    if(num!=-1)
    {
        if(num>=0)
        {
            if(num>max)
            {
                max = num;
            }
            if(num<min)
            {
                min = num;
            }
            sum = sum + num;
            count++;
        }
        else
        {
            printf("\nPlease enter positive numbers only!");
        }
    }
    if(num==-1)
    {
        goto end;
    }
    goto start;
    end :
    avg = (float)sum/(float)count;
    printf("\nSum = %d",sum);
    printf("\nMin = %d",min);
    printf("\nMax = %d",max);
    printf("\nAvg = %.2f",avg);
    printf("\nCount = %d",count);

    return 0;
}