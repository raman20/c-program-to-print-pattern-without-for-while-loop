//floyd triangle using goto statement.

/*1
  2 3
  4 5 6
  7 8 9 10
  11........
*/  

#include<stdio.h>

void main()
{
	int n,i,j,m=1;
	printf("enter number of rows");
	scanf("%d",&n);
	i=1;
	label_a:
	if(i<=n)
	{
		j=1;
		label_c:
		if(j<=i)
		{
			printf("%d ",m);
			j++;
			m++;
			goto label_c;
		}
		i++;
		printf("\n");
		goto label_a;
	}
}
