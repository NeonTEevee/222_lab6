#include <stdio.h>
int main ()
{
	int n, i;
	scanf("%d", &n);
	int score[n][n], player[n];
	for(i=1; i<=n; i++)
	{
		scanf("%d %d", &score[i][1], &score[i][2]);
	}
	
	for(i=1; i<=n; i++)
		player[i] = 0;
	
	for(i=1; i<=n; i++)
	{
		if(score[i][1] == i || score[i][2] == i)
			player[i]++;
	}
	
	for(i=1; i<=n; i++)
	{
		printf("Player %d = %d\n", i, player[i]);
	}
	
	return 0;
	
}
