#include<iostream>
using namespace std;



int** add(int** arr, int row, int col, int index) {//������� ��������� ������ ��������� ����� �� ��������� �������
	int** arr2 = new int* [row + 1];
	int k = 0;
	for (int i = 0; i < row + 1; i++) {
		if (i == index) {
			arr2[i] = new int[col];
		}
		else {
			arr2[i] = arr[k];
			k++;
		}
	}
	delete[] arr;
	for (int i = 0; i < col; i++) {
		arr2[index][i] = rand() % 10;
}
	return(arr2);

}
int** delete_row(int** arr, int row, int col, int index) {//������� ������ ����� �� ��������� �������
	int** arr2 = new int* [row - 1];
	int k = 0;
	for (int i = 0; i < row; i++) {
		if (i == index) {
			continue;
		}
		else {
			arr2[k] = arr[i];
			k++;
		}
	}
	delete[] arr;
	return arr2;
}



int main() {
	//�������� � ������������� ����������� ������������� ������
	int m1 = 5;
	int m2 = 5;
	int** pArr = new int* [m1];
	for (int i = 0; i < m1; i++) {
		pArr[i] = new int[m2];
	}
	for (int i = 0; i < m1; i++) {
		for (int j = 0; j< m2; j++) {
			pArr[i][j] = rand() % 10;
			cout << pArr[i][j];
		}
		cout << endl;
	}
	cout << endl;
	

	//1  �������� �������, ����������� ������ ���������� ������� � ��������� �������.

	//pArr=add(pArr, m1, m2, 2);
	//
	//for (int i = 0; i < m1+1; i++) {//����� ������� ����� ���������� �������
	//	for (int j = 0; j < m2; j++) {
	//		cout << pArr[i][j];
	//	}
	//	cout << endl;
	//}

	//for (int i = 0; i < m1; i++) {//�������� 
	//	delete[]pArr[i];
	//}
	//delete[]pArr; 



	//2  �������� �������, ��������� ������ ���������� ������� �� ���������� �������.

	/*pArr = delete_row(pArr, m1, m2, 0);

	for (int i = 0; i < m1 -1; i++) {
		for (int j = 0; j < m2; j++) {
			cout << pArr[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < m1-1; i++) {
		delete[]pArr[i];
	}
	delete[]pArr; 
*/

	return(0);
}