#include <stdio.h>
int main ()
{
	int x, y, N, Q, max = 0;
	scanf("%d %d", &N, &Q);
	char command[Q];
	int i[N], value[Q][Q];
	for(x=0; x<Q; x++)
	{
		scanf(" %c", &command[x]);
		scanf("%d %d", &value[x+1][0], &value[0][x+1]);
	}
	
	for(x=0; x<=N; x++)
		i[x] = 0;
	
	for(x=0; x<Q; x++)
	{
		if(command[x] == 'U')
		{
			i[value[x+1][0]] = value[0][x+1];
		}
		if(command[x] == 'P')
		{
			for(y=value[x+1][0]; y<=value[0][x+1]; y++)
			{
				if(max < i[y])
					max = i[y];
			}
			printf("%d\n", max);
		}
	}
}
