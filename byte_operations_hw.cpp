#include<iostream>
using namespace std;



int transform_to_dec(int number) {//для двоичных чисел
	int fin = 0;
	for (int i = 0; i < 8; i++) {
		(number % 10 == 0) ? fin += 0: fin += 1* pow(2, i);
		number /= 10;
	}
	return fin;
}

int transform_to_dec(char number[]) {//для шестнадцатиричных чисел
	int fin = 0;
	int k = strlen(number) - 1;
	for (int i = 0; i <= strlen(number)-1; i++) {
		if (int(number[i])==65) {
			fin += 10 * pow(16, k);
		}
		else if (int(number[i]) == 66) {
			fin += 11 * pow(16, k);
		}
		else if (int(number[i]) == 67) {
			fin += 12 * pow(16, k);
		}
		else if (int(number[i]) == 68) {
			fin += 13 * pow(16, k);
		}
		else if (int(number[i]) == 69) {
			fin += 14 * pow(16, k);
		}
		else if (int(number[i]) == 70) {
			fin += 15 * pow(16, k);
		}
		
		else if (int(number[i]) == 49) {
			fin += 1 * pow(16, k);
		}
		else if (int(number[i]) == 50) {
			fin += 2 * pow(16, k);
		}
		else if (int(number[i]) == 51) {
			fin += 3 * pow(16, k);
		}
		else if (int(number[i]) == 52) {
			fin += 4 * pow(16, k);
		}
		else if (int(number[i]) == 53) {
			fin += 5 * pow(16, k);
		}
		else if (int(number[i]) == 54) {
			fin += 6 * pow(16, k);
		}
		else if (int(number[i]) == 55) {
			fin += 7 * pow(16, k);
		}
		else if (int(number[i]) == 56) {
			fin += 8 * pow(16, k);
		}
		else if (int(number[i]) == 57) {
			fin += 9 * pow(16, k);
		}
		
		k--;
	}
	return fin;
}


int main() {

	setlocale(LC_ALL, "rus");
	//1 Написать функцию, которая принимает двоичное число и преобразует его в десятичное.
	//Функция должна вернуть результат с помощью return.

	/*int number;
	cin >> number;
	cout<<transform_to_dec(number);*/

	//2 Написать функцию, которая принимает 16-чное число и преобразует его в десятичное.
	//Функция должна вернуть результат с помощью return.
	/*char number2[8];
	cin >> number2;
	cout << transform_to_dec(number2);*/
	return(0);
}