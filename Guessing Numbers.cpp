#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int n, i, j, right = 0, wrong = 0;
	scanf("%d", &n);
	char num[2][n];
	for(i=0; i<2; i++)
	{
		scanf(" %[^\n]", num[i]);
	}
	
	for(i=0; i<n; i++)
	{
		if(num[0][i] == num[1][i])
		{
			right++;
		} else {
			wrong++;
		}
	}
	
	printf("%d %d", right, wrong);
	return 0;
}
