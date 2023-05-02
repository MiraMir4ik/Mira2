#include<iostream>
using namespace std;

union union2 {//вторая структура
	int number;
	bool arr[4];
};


union union1 {//первая структура
	int number;
	char symbols[4];
};

void enter_number( union1* number1) {//функцыя для ввода числа в первую структуру
	cout << "Введите число:";
	cin >> number1->number;

}

void enter_number(union2* number1) {//функцыя для ввода числа в вторую структуру
	cout << "Введите число:";
	cin >> number1->number;

}

void show_bytes(union1* number1) {//функцыя выводит байты числа в десятичном и шестнадцатиричном виде
	cout << "Это вывод байтов этого числа в десятичной системе исчесления--> ";
	for (size_t i = 0; i < 4; i++) {
		cout <<dec<< int( (number1->symbols)[i])<<" ";
	}
	cout << endl;
	cout << "Это вывод байтов этого числа в шестнадцатиричной системе исчесления --> ";
	for (size_t i = 0; i < 4; i++) {
		cout <<hex<< int( (number1->symbols)[i] )<< " ";
	}
}

void count_zero_bytes(union2* number2) {//функцыя считает количество нулевых байт числа
	int count = 0;
	for (size_t i = 0; i < 4; i++) {
		if (int((number2->arr)[i]) == 0) {
			count++;
		}
	}
	cout << "Столько нулевых байтов у числа --> "<<count;

}

void byte_info(union2* number2) {//функцыя показывает информацыю о байтах числа (нулевой/ненулевой)
	for (size_t i = 0; i < 4; i++) {
		if (int((number2->arr)[i]) == 0) {
			cout << " |нулевой байт| "<<" ";
		}
		else {
			cout << " |не нулевой байт| "<<" ";
		}
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	//Задача 1:
	/*Создайте объединение, состоящее из целого числа и массива символов размером 4 элемента.
		Напишите функции :
	а) Для ввода целого числа, входящего в это объединение;
	б) Для вывода байтов этого числа в десятичном и шестнадцатеричном виде.*/

	union1 number1{};
	union1* pointer = &number1;
	enter_number(pointer);
	cout << endl;
	show_bytes(pointer);

	/*Задача 2:
	Создайте объединение, состоящее из целого числа и массива логических переменных.Напишите следующие функции :
	а) Для ввода целого числа;
	б) Для расчета, сколько нулевых байтов у числа;
	в) Для вывода информации о байтах числа(нулевой, не нулевой).*/

	cout << endl;

	/*union2 number2{};
	union2* pointer2 = &number2;
	enter_number(pointer2);
	count_zero_bytes(pointer2);
	cout << endl;
	byte_info(pointer2);*/
	return 0;
}