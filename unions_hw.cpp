#include<iostream>
using namespace std;

union union2 {//������ ���������
	int number;
	bool arr[4];
};


union union1 {//������ ���������
	int number;
	char symbols[4];
};

void enter_number( union1* number1) {//������� ��� ����� ����� � ������ ���������
	cout << "������� �����:";
	cin >> number1->number;

}

void enter_number(union2* number1) {//������� ��� ����� ����� � ������ ���������
	cout << "������� �����:";
	cin >> number1->number;

}

void show_bytes(union1* number1) {//������� ������� ����� ����� � ���������� � ����������������� ����
	cout << "��� ����� ������ ����� ����� � ���������� ������� ����������--> ";
	for (size_t i = 0; i < 4; i++) {
		cout <<dec<< int( (number1->symbols)[i])<<" ";
	}
	cout << endl;
	cout << "��� ����� ������ ����� ����� � ����������������� ������� ���������� --> ";
	for (size_t i = 0; i < 4; i++) {
		cout <<hex<< int( (number1->symbols)[i] )<< " ";
	}
}

void count_zero_bytes(union2* number2) {//������� ������� ���������� ������� ���� �����
	int count = 0;
	for (size_t i = 0; i < 4; i++) {
		if (int((number2->arr)[i]) == 0) {
			count++;
		}
	}
	cout << "������� ������� ������ � ����� --> "<<count;

}

void byte_info(union2* number2) {//������� ���������� ���������� � ������ ����� (�������/���������)
	for (size_t i = 0; i < 4; i++) {
		if (int((number2->arr)[i]) == 0) {
			cout << " |������� ����| "<<" ";
		}
		else {
			cout << " |�� ������� ����| "<<" ";
		}
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	//������ 1:
	/*�������� �����������, ��������� �� ������ ����� � ������� �������� �������� 4 ��������.
		�������� ������� :
	�) ��� ����� ������ �����, ��������� � ��� �����������;
	�) ��� ������ ������ ����� ����� � ���������� � ����������������� ����.*/

	union1 number1{};
	union1* pointer = &number1;
	enter_number(pointer);
	cout << endl;
	show_bytes(pointer);

	/*������ 2:
	�������� �����������, ��������� �� ������ ����� � ������� ���������� ����������.�������� ��������� ������� :
	�) ��� ����� ������ �����;
	�) ��� �������, ������� ������� ������ � �����;
	�) ��� ������ ���������� � ������ �����(�������, �� �������).*/

	cout << endl;

	/*union2 number2{};
	union2* pointer2 = &number2;
	enter_number(pointer2);
	count_zero_bytes(pointer2);
	cout << endl;
	byte_info(pointer2);*/
	return 0;
}