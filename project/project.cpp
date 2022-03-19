// project.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//bob

#include <iostream>

int main()
{
	cout << "Enter A and B: ";
	int a, b;
	cin >> a >> b;
	int max = a;
	if (b >= a) {
		max = b;
	}
	cout << "A + B = " << a + b << '\n'
		<< "A - B = " << a - b << '\n'
		<< "A * B = " << a * b << '\n'
		<< "A / B = " << a / b << '\n'
		<< "max= " << max << '\n';
}


