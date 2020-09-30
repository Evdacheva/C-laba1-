

#include <iostream>
#include <iomanip>

const size_t n = 5;

void freeArr1D(int* arr)
{
	delete[] arr;
}

void freeArr2D(int** arr)
{
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
}

void print(int** arr2D, int rows, int cols)
{
	std::cout << std::endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << std::setw(8) << *(*(arr2D + i) + j);
		}
		std::cout << std::endl;
	}
}

int fact(int num)
{
	if (num == 0)
		return 1;
	else
		return num * fact(num - 1);
}

void arr(int** arr2D, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			*(*(arr2D + i) + j) = fact(i+j);
		}
	}
	print(arr2D, n, n);
}

void NewArr(int** arr2D, int rows, int cols)
{
	int n = 10, rowsCnt = 1, cnt = 0;
	int* newArr = new int[n];
	std::cout << std::endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (rowsCnt % 2 == 0)
			{
				*(newArr + cnt) = *(*(arr2D + i) + j);
				cnt++;
			}
		}
		rowsCnt++;
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << *(newArr + i) << " ";
	}
	freeArr1D(newArr);
}

void main()
{
	int** arr2D = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr2D[i] = new int[n];
	}
	arr(arr2D, n, n);
	NewArr(arr2D, n, n);
	freeArr2D(arr2D);
	system("pause");
}