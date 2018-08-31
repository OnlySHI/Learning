#include <stdio.h>

static void PrintArr(int *arr, int len);

static int BubbleSort(int *arr, int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len-1; i++)
	{
		for (j = 0; j < len-1-i; j++)
		{
			printf("arr[%d] = %d, arr[%d] = %d\n", j, arr[j], j+1, arr[j+1]);
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	
	//PrintArr(arr,5);
	return 0;
}

static int SelectionSort(int *arr, int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len-1; i++)
	{
		int min = i;
		for (j = i+1; j < len; j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}
		if (min != i)
		{
			int tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
		}
	}
	return 0;
}

void PrintArr(int *arr, int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		printf("a[%d] = %d\n", i, arr[i]);
	}
}


int main(int argc, const char *argv[])
{
	int a[5] = {6,5,4,3,2};

	SelectionSort(a, 5);
	//BubbleSort(a, 5);

	PrintArr(a, 5);

	return 0;
}
