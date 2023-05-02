#include<iostream>
using namespace std;


int** delete_col(int** arr, int m1, int m2, int index) {
	int** arr2 = new int* [m1];
	for (int i = 0; i < m1; i++) {
		arr2[i] = new int[m2-1];
	}
	int k = 0;

	for (size_t i = 0; i < m1; i++) {
		k = 0;
		for (size_t j = 0; j < m2; j++) {
			if (j == index) {
				continue;
			}
			else {
				arr2[i][k]=arr[i][j];
				k++;
			}
		}
		
	}
	delete arr;
	return arr2;
}

void translation(int** arr, int row, int col, int shift, int diraction) {
	switch (diraction) {
	case 1://сдвиг столбца вправо

		for (int k = 0; k < shift; k++) {
			for (size_t i = 0; i < row; i++) {
				int temp = arr[i][col-1];
				for (size_t j = (col-1); j > 0; j--)
				{
					arr[i][j] = arr[i][j-1];
				}
				arr[i][0] = temp;
			}
		}
		break;

	case 2://сдвиг столбца влево

		for (size_t k = 0; k < shift; k++) {
			for (size_t i = 0; i < row; i++) {
				int temp = arr[i][0];
				for (size_t j = 0; j < col; j++)
				{
					arr[i][j] = arr[i][j + 1];
				}
				arr[i][col - 1] = temp;
			}
		}
		break;

	case 3://сдвиг рядка вверх
		for (size_t k = 0; k < shift; k++) {
			int* ptr = new int[col];
			for (int q = 0; q < col; q++) {
				ptr[q] = arr[0][q];
			}
			for (size_t i = 0; i < (row-1); i++) {
				
				for (size_t j = 0; j < col; j++)
				{
					arr[i][j] = arr[i+1][j];
				}
				
			}
			for (int q = 0; q < col; q++) {
				arr[row - 1][q] = ptr[q];
			}
		}
		break;
	case 4://сдвиг рядка вниз
		for (size_t k = 0; k < shift; k++) {
			int* ptr = new int[col];
			for (int q = 0; q < col; q++) {
				ptr[q] = arr[row-1][q];
			}
			for (size_t i = (row-1); i >0; i--) {

				for (size_t j = 0; j < col; j++)
				{
					arr[i][j] = arr[i - 1][j];
				}

			}
			for (int q = 0; q < col; q++) {
				arr[0][q] = ptr[q];
			}
		}
		break;
	}
	
}
int main(){
	setlocale(LC_ALL,"rus");
//1 Написать функцию, удаляющую столбец двумерного массива по указанному индексу.

 //создание и иницыальзацчя двухмерного динамического масива
	/*int m1 = 5;
	int m2 = 5;
	int** pArr = new int* [m1];
	for (int i = 0; i < m1; i++) {
		pArr[i] = new int[m2];
	}
	for (int i = 0; i < m1; i++) {
		for (int j = 0; j < m2; j++) {
			pArr[i][j] = rand() % 10;
			cout << pArr[i][j];
		}
		cout << endl;
	}
	cout << endl;

	pArr = delete_col(pArr, m1, m2, 2);

	for (int i = 0; i < m1; i++) {
		for (int j = 0; j < m2-1; j++) {
			cout << pArr[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < m1; i++) {
		delete[]pArr[i];
	}
	delete[]pArr;*/


	//2  Дана матрица порядка M×N (M строк, N столбцов). Необходимо заполнить ее значениями и
	//написать функцию, осуществляющую циклический сдвиг строк и/или 
	//столбцов массива указанное количество раз и в указанную сторону.

	int M ;
	int N ;
	int shift;
	int diraction;
	cout << "Введите количество строк:";
	cin >> M;
	cout << "Введите количество столбцов:";
	cin >> N;

	int** pArr = new int* [M];
	for (int i = 0; i < M; i++) {
		pArr[i] = new int[N];
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			pArr[i][j] = rand() % 10;
			cout << pArr[i][j];
		}
		cout << endl;
	}

	cout << "Введите количество сдвигов: ";
	cin >> shift;
	cout << "Выберите в какую сторону делать сдвиг:\n1)вправо   2)влево \n3)вверх    4)вниз";
	cout << endl;
	cin >> diraction;
	cout << endl;
	translation(pArr, M, N, shift, diraction);
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << pArr[i][j];
		}
		cout << endl;
	}

	
return(0);
}