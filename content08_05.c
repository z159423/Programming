#include <stdio.h>

int main(void)
{
	int table[3][5] = {12,56,32,16,98,99,56,34,41,3,65,3,87,78,21};
	int add = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%3d", table[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			add = add + table[i][j];
		}
		printf("%d행의 합계 : %d\n",i+1,add);
		add = 0;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			add = add + table[j][i];
		}
		printf("%d열의 합계 : %d\n", i + 1, add);
		add = 0;
	}

	return 0;
}
