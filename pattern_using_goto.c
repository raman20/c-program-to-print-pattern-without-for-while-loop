/* *
   **
   ***
   ****
   *****
using goto statement.
*/

#include<stdio.h>

void main()
{
	int n,i,j;
	printf("enter no. of rows: ");
	scanf("%d",&n);
	i=1;
	label_a:
    if(i<=n)
    {
    	j=1;
    	label_b:
    	if(j<=i)
    	{
    		printf("* ");
    		j++;
    		goto label_b;
    	}
    	i++;
    	printf("\n");
    	goto label_a;
    	
    	   }
}
