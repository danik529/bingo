#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int baserand(int x, int y)
{
	static int z = 0;
	int tmp;
	if(z==0) {
		     srand((int)time(NULL));
		     rand();rand();rand();rand();
			 srand(rand());
			 z=1; 
	}
	
	tmp = rand()%(y-x+1)+x;
	return tmp;
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
}
	return 0;
}
