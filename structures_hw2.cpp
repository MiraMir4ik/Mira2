#include<iostream>
using namespace std;

struct student {
	char surname[20];
	short group_number : 4;
	bool gender:1;
	bool job:1;
};
int main() {
	//������� ���������, ���������� ���������� � ��������� :
	//�������, ����� ������(�� 1 �� 10), ������� / �������(0 / 1), ����������� / ��������(0 / 1).
	//	��� ����� ���������, ����� �������, -������� ����

	student Mira = { "Madani",10,1,0 };


	return(0);
}