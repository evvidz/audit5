// audit5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int array[100], sz, i, j, swap;
	srand(time(NULL));
	printf("Enter size of array\n");
	scanf("%d", &sz);

	for (i = 0; i < sz; i++) {
		array[i] = rand() % 1001 - 500;
		printf("%d%c", array[i], i < sz - 1 ? '\t' : '\n');
	}
	for (i = 0; i < (sz - 1); i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
			}
		}
	}
	printf("Sorted by BubbleSort:\n");

	for (i = 0; i < sz; i++)
		printf("%d%c", array[i], i < sz - 1 ? '\t' : '\n');

    return 0;
}

