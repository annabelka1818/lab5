// lab5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	srand(time(NULL));
	int n, sum=0;
	bool switcher=true;
	cout << "Enter n: ";
	cin >> n;
	int *arr = new int[3 * n];
	cout << "arr: ";
	for (int i = 0; i < 3 * n; i++) {
		arr[i] = rand()%21-10;
		cout << arr[i]<<" ";
	}
	for (int i = n+1; i < 3 * n; i++) {
		for (int j = 0; j < n+1; j++)
		{
			if (arr[i] < arr[j])
				switcher = false;
		}
		if(switcher)
			sum += arr[i];
		switcher = true;
	}
	cout << "Sum: " << sum;
}
