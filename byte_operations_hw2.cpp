#include<iostream>
using namespace std;
void DecToBin(int number) {
	int num_dec[8];
	for (int i = 0; i <= 7; i++) {
		((number % 2) == 0) ? num_dec[i] = 0 : num_dec[i] = 1;
		number /= 2;
	}
	for (int j = 0; j < 4; j++) {
		int flag = num_dec[j];
		num_dec[j] = num_dec[7 - j];
		num_dec[7 - j] = flag;
	}
	for ( int q= 0; q <= 7; q++) {
		cout << num_dec[q];
	}

	
}
void BinToHex(int number) {
	int fin = 0;
	for (int i = 0; i < 8; i++) {
		(number % 10 == 0) ? fin += 0 : fin += 1 * pow(2, i);
		number /= 10;
	}
	
	cout << fin;

	
	

}

int main() {

	//1) Написать функцию, принимающую десятичное 
	//число и преобразующее его в двоичную форму.
	 //DecToBin(3);
	
	//2 Написать функцию, принимающую двоичное число и преобразующее его в 16-ричную форму.
	BinToHex(00000101);
	return(0);
}