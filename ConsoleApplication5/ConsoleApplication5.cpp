﻿// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// lab5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	srand(time(NULL));
	int n, sum = 0;
	bool switcher = true;
	cout << "Enter n: ";
	cin >> n;
	int* arr = new int[3 * n];
	cout << "arr: ";
	for (int i = 0; i < 3 * n; i++) {
		arr[i] = rand() % 21 - 10;
		cout << arr[i] << " ";
	}
	for (int i = n + 1; i < 3 * n; i++) {
		for (int j = 0; j < n + 1; j++)
		{
			if (arr[i] < arr[j])
				switcher = false;
		}
		if (switcher)
			sum += arr[i];
		switcher = true;
	}
	cout << "Sum: " << sum;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
