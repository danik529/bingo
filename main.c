#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i;
	int max=25;
	
	srand((unsigned)time(NULL));
	for (i=0;i<25;i++)
	{
		printf("%d ", 1+rand()%max);
	}

	}
	
void print_bingo(int mine[N][N]){ 

	
void initiate_bingo(int mine[N][N])
{
	int i,j;
	
	for (i=0;i<N;i++) {
		for (j=0;j<N;j++){
			printf("%d ", mine[i][j]);
		}
		printf("\n");
	}
}
    return 0;

}


