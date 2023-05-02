#include<iostream>
using namespace std;


int my_strcmp(char* line1, char* line2) {
	int min = min = strlen(line1);
	(strlen(line1) < strlen(line2)) ? min = strlen(line1) : min = strlen(line2);
	for (int i = 0; i < min; i++) {
		if (line1[i] > line2[i]) {
			return 1;
		}
		else if (line1[i] < line2[i]) {
			return -1;
		}
		else {
			continue;
		}
	}
	if (strlen(line1) > strlen(line2)) {
		return 1;
	}
	else if (strlen(line1) < strlen(line2)) {
		return  -1;
	}
	else {
		return 0;
	}
}
int main() {

	//1
		char line[] = "Hello World I am Mira!";


		size_t m = 0;
		size_t n = 0;
		cin >> m;
		cin >> n;

		for (size_t i = 0; i < strlen(line); i++) {
			if (i == m) {
				for (int j = i; j <= n; j++) {
					if (n < strlen(line)) {
						line[j] = line[n++];
					}
					else {
						line[j] = '\0';
					}
				}
			}
		}
		for (int i = 0; i < strlen(line); i++) {
			cout << line[i];
		}


		//2
		/*char line[40];
		cin.get(line, 40);
		char symbol;
		cin >> symbol;
		for (int i = 0; i < strlen(line); i++) {
			if (line[i] == symbol) {
				cout << i++ << endl;
			}
		}*/

		//3
		/* char line[40];
		cin.get(line, 40);
		char symbol;
		cin >> symbol;
		int k = 0;
		for (int i = 0; i < strlen(line); i++) {
			if (line[i] == symbol) {
				 i ++;
				k = i;
			}
		}
		cout << k;*/

		//4
		/*char line[] = "acl";
		char line2[] = "abllo0";
		cout<<my_strcmp(line, line2);*/

		//5
	int col;
	cin >> col;
	int row;
	cin >> row;
	srand(time(0));
	int** arr1 = new int* [row];
	for(int i = 0; i < row; i++){
		arr1[i] = new int[col];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr1[i][j] = rand() % 10 +0;
			cout << arr1[i][j];
		}
		cout << endl;
	}

	cout << endl;
	int** arr2 = new int* [row];
	for (int i = 0; i < row; i++) {
		arr2[i] = new int[col];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr2[i][j] = rand() % 10 + 0;
			cout << arr2[i][j];
		}
		cout << endl;
	}

	cout << endl;

	int** arr3 = new int* [row];
	for (int i = 0; i < row; i++) {
		arr3[i] = new int[col];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr3[i][j] = arr1[i][j]+ arr2[i][j];
			cout << arr3[i][j]<<" ";
		}
		cout << endl;
	}

	for (int i = 0; i < row; i++) {
		delete[]arr1[i];
		delete[]arr2[i];
		delete[]arr3[i];

	}
	delete[]arr1; 
	delete[]arr2;
	delete[]arr3;

	return(0);
}