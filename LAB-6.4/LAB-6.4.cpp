// LAB-6.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// LAB_06_4.cpp
// Сушинський Ігор
// Лабораторна робота № 6.4
// Опрацювання та впорядкування одновимірних динамічних масивів.
// Варіант 21
// Ітераційний спосіб

#include <iostream>
#include <iomanip>

using namespace std;

double Sum(double* a, const double n)
{
	double S = 0;

	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			S += a[i];
	return S;
}

double Dob(double* a, const double n)
{
	double D = 1;

	for (int i = 0; i < n; i++)
		D *= a[i];
	return D;
}

void Sort(double* a, const double n)    // Метод обміну (бульбашки)
{
	for (int i = 1; i < n; i++)         // лічильник ітерацій
		for (int j = 0; j < n - i; j++) // номер поточного елемента
			if (a[j] > a[j + 1])        // якщо порушено умову впорядкування
			{                           // - обмін елементів місцями
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
	for (int i = 0; i < n; i++)
		cout << setw(3) << a[i] << " ";
	cout << "\n";
}

int main()
{
	double n;

	cout << "n = "; cin >> n;

	double *a = new double[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Enter element number " << i << ": ";
		cin >> a[i]; // ввожу елементи масиву
	}

	cout << "S = " << Sum(a, n) << endl;
	cout << "D = " << Dob(a, n) << endl;
	cout << "Sort = "; Sort(a, n);

	return 0;
}