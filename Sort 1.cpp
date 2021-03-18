#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int n, i, j;
	scanf("%d", &n);
	char word[n][1000], copy[n][1000], tempt[1000];
	for(i=0; i<n; i++)
	{
		scanf(" %[^\n]", word[i]);
		strcpy(copy[i], word[i]);
		if(copy[i][0]>=97)
			copy[i][0]-=32;
		printf("Word = %s, Copy = %s", word[i], copy[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(copy[i][0]>copy[j][0])
			{
				strcpy(tempt, word[i]);
				strcpy(word[i], word[j]);
				strcpy(word[j], tempt);
				i = -1;
				j = n;
			}
		}
	}
	
	for(i=0; i<n; i++)
		printf("%s\n", word[i]);
	return 0;
}
