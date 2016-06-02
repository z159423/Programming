#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int Max_point=0, Low_point=101,mean=0;
	int exam[3][10] = {0};			//3열 10행 배열 선언
	srand(time(NULL));			//랜덤함수 선언

	for (int i = 0; i < 3; i++)		
	{
		for (int j = 0; j < 10; j++)
		{
			exam[i][j] = (rand() % 100) + 1;		//배열 원소에 100이하 정수 자동입력
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("학생%d의 시험%d의 학생의 성적 : %d 점\n",j+1,i+1,exam[i][j]);		//성적 출력
		}
		printf("\n");
	}

	
	for (int i = 0; i < 3; i++)
	{
		printf("(a) 시험%d 의 최고, 최저, 평균점수 :",i+1);
		for (int j = 0; j < 10; j++)
		{
			if (Max_point < exam[i][j]) Max_point = exam[i][j];		// Max_point에 최고값 삽입
			if (Low_point > exam[i][j]) Low_point = exam[i][j];		// Low_point에 최저값 삽입
			mean += exam[i][j];		// 평균값 구하기
		}
		mean = mean / 10;
		printf("%d %d %d\n",Max_point,Low_point,mean);
		Max_point = 0, Low_point = 101, mean = 0;

	}
	printf("\n");

	for (int i = 0; i < 10; i++)
	{
		printf("(b) 학생%d 의 최고, 최저, 평균점수 :", i + 1);
		for (int j = 0; j < 3; j++)
		{
			if (Max_point < exam[j][i]) Max_point = exam[j][i];
			if (Low_point > exam[j][i]) Low_point = exam[j][i];
			mean += exam[j][i];
		}
		mean = mean / 3;
		printf("%d %d %d\n", Max_point, Low_point, mean);
		Max_point = 0, Low_point = 101;
		mean = 0;
	}
	

	system("pause");
	return 0;
}
