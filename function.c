#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#define N 5

void initiate_bingo(int bingo[N][N])
{
	int i,j;
	int temp; //�ߺ��� �������ִ� ����  
	int tem; //1-25���� �������� �̴� ����  
		
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			bingo[i][j] = 0;
		}
	}
	
	for(i=0;i<N*N;i++)
	{
		temp = 0;
	}
	
	for(i=0;i<N*N;i++)
	{
		while(1) 
		{
			tem=rand()%(N*N)+1;
		    if(temp[tem-1])=0
		    {
		    	bingo[i][j] = 1;
		    	
		    	break;
			}
		}
	}
}
