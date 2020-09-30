//Написать свой аналог стандартной функции обработки строк из файла
//cs tring, в соответствии с вариантом.
//В функции main  на тестовых данных продемонстрировать результат 
//работы как стандартной функции, так и собственной версии.
//Ввод - вывод данных организовать средствами cs tdio
//Функция str c mp.Формат int strcmp(const char* s1, const char* s2).
//Функция сравнивает строку s1 со строкой s2 в лексикографическом порядке.
//Если s1<s2, то результат равен - 1, если s1 = s2, то 0, если s1>s2, то 1.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;


int Strcmp(const char* s1, const char* s2);


int main() {


	setlocale(0, " ");

	const char* s1 = "str";
	const char* s2 = "str1";



	printf("%d\n", strcmp(s1, s2));

	printf("%d", Strcmp(s1, s2));


	return 0;
}


int Strcmp(const char* s1, const char* s2) {

	if (s1 < s2)
	{
		return -1;
	}
	else if (s1 == s2)
	{
		return 0;
	}
	else if (s1 > s2)
	{
		return 1;
	}
	else
	{
		return -2;
		cout « "Как это получилось?" « endl;
	}
}

