// COSC 2030
// Joshua Smith
// Lab 3
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
	long n = 0;
	cout << "Enter your number: ";
	cin >> n;
	long sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	cout << "n = " << n << "\nsum = " << sum << endl;

	cout << "Enter another number: ";
	cin >> n;
	double product = 1;
	for (int i = 1; i <= n; i++) {
		product *= i;
	}
	cout << "n = " << n << "\nproduct = " << product << endl;

	double product2 = 0;
	cout << "Give me more numbers: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		product2 += 1.0/n;
	}
	product2 -= 1.0;
	cout << "n = " << n << "\nproduct2 = " << product2 << endl;

	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}


	system("pause");
	return 0;
}