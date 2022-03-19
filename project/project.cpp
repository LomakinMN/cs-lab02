// project.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//bob

#include <iostream>

int main()
{
	cout << "Enter A and B: ";
	double a, b;
	cin >> a >> b;
	double min = a;
	if (b <= a) {
		min = b;
	}
	double max = a;
	if (b >= a) {
		max = b;
	}
	cout << "A + B = " << a + b << '\n'
		<< "A - B = " << a - b << '\n'
		<< "A * B = " << a * b << '\n'
		<< "A / B = " << a / b << '\n'
		<< "min = " << min << '\n'
		<< "max= " << max << '\n';
}


