#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int i, j, size, x = 0, y = 0;
	scanf("%d", &size);
	int paper[size][size];
	char draw[250];
	scanf(" %s", draw);
	for(i=0; i<=size; i++)
	{
		for(j=0; j<=size; j++)
		{
			paper[i][j] = 0;
		}
	}
	
	for(i=0; i<strlen(draw); i++)
	{
		if(draw[i] == 'D' && y != size-1)
		{
			if(draw[i-1] == 'L'||draw[i-1] == 'R'){
				paper[x][y] = 3;
			} else {
				paper[x][y] = 1;
			}
			y++;
		}
		if(draw[i] == 'U' && y != 0)
		{
			if(draw[i-1] == 'L'||draw[i-1] == 'R'){
				paper[x][y] = 3;
			} else {
				paper[x][y] = 1;
			}
			y--;
		}
		if(draw[i] == 'R' && x != size-1)
		{
			if(draw[i-1] == 'D'||draw[i-1] == 'U'){
				paper[x][y] = 3;
			} else {
				paper[x][y] = 2;
			}
			x++;
		}
		if(draw[i] == 'L' && x != 0)
		{
			if(draw[i-1] == 'D'||draw[i-1] == 'U'){
				paper[x][y] = 3;
			} else {
				paper[x][y] = 2;
			}
			x--;
		}
	}
	
	if(draw[i-1] == 'D'||draw[i-1] == 'U')
	{
		if(paper[x][y-1] == 2||paper[x][y+1] == 2) {
			paper[x][y] = 3;
		} else {
			paper[x][y] = 1;
		}
	} else {
		if(paper[x][y-1] == 1||paper[x][y+1] == 1) {
			paper[x][y] = 3;
		} else {
			paper[x][y] = 2;
		}
	}
	
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			if(paper[j][i] == 1) {
				printf("| ");
			} else if(paper[j][i] == 2) {
				printf("- ");
			} else if(paper[j][i] == 3) {
				printf("+ ");
			} else {
				printf(". ");
			}
		}
		printf("\n");
	}
}
