#include <stdlib.h>
#include <stdio.h>
#include <algorithm> 

void printArray(int* arr, int size)
{
	for(int i = 0; i < size; ++i)
	{
		printf("%i", arr[i]);

		if(i < size - 1)
		{
			printf(",");
		}
	}

	printf("\n");
}


void naiveBubbleSort(int* arr, int size)
{
	bool sorted = false;

	while(sorted == false)
	{
		bool swapOccurred = false;
		for(int i = 0; i < size - 1; ++i)
		{
			if(arr[i] > arr[i + 1])
			{
				std::swap(arr[i], arr[i+1]);
				swapOccurred = true;
			}
		}		

		sorted = !swapOccurred;
	}
}

void bubbleSort(int* arr, int size)
{
	bool swapped;

	for(int i = 0; i < size - 1; ++i)
	{
		swapped = false;	

		for(int j = 0; j < size - i - 1; ++j)
		{
			if(arr[j] > arr[j+1])
			{
				swapped = true;
				std::swap(arr[j], arr[j+1]);
			}
		}

		if(swapped == false)
		{
			break;
		}
	}
}

int main(int argc, char* argv[]) {
	int a[] = {0,-1,3,10,100,3};
	int b[] = {-1};
	int c[] = {0,0,0,1235,-1};
	int d[] = {};

	int len_a = 6;
	int len_b = 1;
	int len_c = 5;
	int len_d = 0;

	bubbleSort(a, len_a);
	bubbleSort(b, len_b);
	bubbleSort(c, len_c);
	bubbleSort(d, len_d);

	printArray(a, len_a);
	printArray(b, len_b);
	printArray(c, len_c);
	printArray(d, len_d);

	return 0;
}