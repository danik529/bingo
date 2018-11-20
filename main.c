#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) 
{
	srand((unsigned)time(NULL));	
}

void print_bingo(int bingo[N][N])
{
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
		printf("%d ", bingo[i][j]);
	    }
	 printf("\n");
    }
}

	
