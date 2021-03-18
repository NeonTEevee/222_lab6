#include <stdio.h>
int main ()
{
	int i, j, W, H, total = 0, level, remain;
	scanf("%d %d", &W, &H);
	int ground[W][H];
	for(i=0; i<H; i++)
	{
		for(j=0; j<W; j++)
		{
			scanf("%d", &ground[i][j]);
			total+=ground[i][j];
		}
	}
	
	level = total/(W*H);
	remain = total%(W*H);
	printf("%d", (W*H)-remain);
	return 0;
}
