
#include <iostream>
#include <cstdlib>
#include <ctime>

//Функция
void print(float arr[], int n)
{
	printf("\n\nArray:\n");
	for (int i = 0; i < n; i++)
	{
		printf("| %f ", arr[i]);
	}
}

float processArray(float arr[], int n, float a, float b)
{
	srand((unsigned int)time(NULL));
	int pos = 0;
	//рандомные числса
	for (int i = 0; i < n; i++)
	{
		arr[i] = ((b - a) * ((float)rand() / RAND_MAX)) + a;
	}
	print(arr, n);
	//ищем максимальный эл.
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			pos = i;
		}
	}
	
	for (int i = 0; i < n; i++)
		arr[i] += max;

	float* newArr = new float[n];
	//новый массив
	for (int i = 0; i < n; i++)
	{
		if (i > pos)
			newArr[i] = arr[i];
		else
			newArr[i] = max;
	}
	print(newArr, n);
	return max;
	delete[] newArr;

}

void main()
{
	const int n = 20;
	float a = -20, b = 70;
	float arr[n] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	printf("\n\nMax num of array is %f\n", processArray(arr, n, a, b));
}

    
