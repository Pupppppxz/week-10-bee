#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calculate(int* a, int *worker, int *sum)
{
	for (int i = 1; i <= *a; i++)
	{
		*worker += i;
		if (i < 2) { *sum += 2; }
		else { *sum += (i + (i - 1)); }
	}
	printf("\nYear [%d] Worker bee : %d All bees : %d\n", *a, *worker, *sum);
}

void calculate1(int* b, int *worker1, int *sum1)
{
	for (int j = 1; j <= *b; j++)
	{
		*worker1 += j;
		if (j < 2) { *sum1 += 2; }
		else { *sum1 += (j + (j - 1)); }
	}
	printf("Year [%d] Worker bee : %d All bees : %d", *b, *worker1, *sum1);
}
int main()
{
	int numm[2], worker=1, sum=2, worker1=1, sum1=2;
	printf("[1] : first year count\n");
	printf("[2] : final years count\n");
	printf("[3] : enter 1 to calculate\n");
	printf("Warning :: The final count cannot exceed 24.\n\n");

	for (int i = 0; i < 3; i++)
	{
		printf("Enter number[%d] : ",i+1);
		scanf("%d", &numm[i]);
	}


	if (numm[2] == 1)
	{
		if (numm[0] > 0 && numm[1] > 0 && numm[1] < 25)
		{
			calculate(&numm[0],&worker,&sum);
			calculate1(&numm[1],&worker1,&sum1);
		}
	}
	else
	{
		printf("\nError");
	}
	return 0;
}