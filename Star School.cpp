#include <stdio.h>
int main ()
{
	int n, i, j, max = 0, best, worst;
	scanf("%d", &n);
	int score[n][n], player[n], min = n;
	for(i=1; i<=n; i++)
	{
		scanf("%d %d", &score[i][1], &score[i][2]);
	}
	
	for(i=1; i<=n; i++)
		player[i] = 0;
		
	for(i=1; i<=n; i++)
	{
		player[score[i][1]]++;
		player[score[i][2]]++;
	}
	
	for(i=1; i<=n; i++)
	{
		if(max < player[i])
		{
			max = player[i];
			best = i;
		}
		if(min > player[i])
		{
			min = player[i];
			worst = i;
		}
	}
	
	printf("%d %d", best, worst);
	return 0;
	
}
