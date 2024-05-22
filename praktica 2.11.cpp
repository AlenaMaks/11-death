//20 вариант

#include <iostream>
#include <vector>
using namespace std;

template<typename tyt>
tyt amb(tyt a) {
	int b = 0;
	for (int i = 1; i <= (a / 2); i++) {
		if (a % i == 0) {
			b += i;
		}
	}
	return b;
}

template<typename tyt>
tyt vctr(vector<tyt>laba) {
	int b = size(laba);
	int pr = 1;
	for (int i = 0; i < b; i += 2) {
		pr = pr * laba[i];
	}
	return pr;
}



int main()
{
	setlocale(LC_ALL, "ru");

	//1 проверка на избыточное число
	/*int a, b;
	cout << "Введите число: ";
	cin >> a;
	b = amb(a);
	if (b > a) cout << endl << "Число является избыточным.";
	else cout << endl << "Число не является избыточным.";*/


	//2 произведение элементов вектора на чётных позициях
	/*cout << "Введите количество элементов в массиве: ";
	int a;
	cin >> a;
	vector<int> laba(a);
	cout << endl << "Введите элементы массива: " << endl;
	for (int i = 0; i != a; i++) {
		cin >> laba[i];
	}
	int pr = vctr(laba);
	cout << endl << "Произведение чётных элементов: " << pr;*/



}

