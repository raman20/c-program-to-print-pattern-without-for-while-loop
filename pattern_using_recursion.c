// printing pattern using recursion,
/*  *
    **
    ***
    ****
    *****
*/

#include<stdio.h>

void pattern1(int n)
{
	if(n==0)
	{
		return;
	}
	printf("* ");
	pattern1(n-1);
}

void pattern2(int n, int i)
{
	if(n==0)
		return;
	pattern1(i);
	printf("\n");
	pattern2(n-1,i+1);
}

void main()
{
	int n,i=1;
	printf("enter no. of rows: ");
	scanf("%d",&n);
	if(i==1)
		pattern2(n,i);
}    