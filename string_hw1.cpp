#include<iostream>
using namespace std;

int word_count(char* text, char* word) {//������� ���������� ����������  ����� � ������
	int count = 0;
	while (strstr(text, word)) {
		count++;
		text = strstr(text, word) + strlen(word);
	}
	return(count);
}

int sentence_count(char* text) {//������� ���������� ����������� � ������
	int count = 0;
	while (strchr(text, '.')) {
		count++;
		text = strchr(text, '.') + 1;
	}
	return(count);
}
int comma_count(char* text) {//�������  ���������� �������
	int comma_count = 0;
	while (strchr(text, ',')) {
		comma_count++;
		text = strchr(text, ',') + 1;
	}
	return(comma_count);
}

void reverse(char* text) {//�������������� �����
	for (size_t i = 0; i < strlen(text) / 2; i++) {
		int flag = text[i];
		text[i] = text[strlen(text) - 1 - i];
		text[strlen(text) - 1 - i] = flag;
	}


}
int main() {
	//���� ��������� �����. ��������� �����������
	//��������� ������� 
	char text[] = "The Smiths live in a house. They have a living room. They ,watch TV in the living room. The father cooks food in the kitchen.";
	char word[20];
	cout << "Enter word you want to find in text-->";
	cin >> word;

	//1)
	cout << word_count(text, word);//���������� ���������� ��������� �����, ����������������������;
	//2)
	cout << sentence_count(text);//���������� ���������� ����������� � ������;
	//3)
	cout << comma_count(text);//���������� ����� � �������;
	//4)
	reverse(text);//����������� ���� ����� �������.
	for(size_t i = 0; i < strlen(text); i++){
		cout << text[i];
	}
	return(0);
}