#include<iostream>
using namespace std;

int word_count(char* text, char* word) {//считает количество введенного  слова в тексте
	int count = 0;
	while (strstr(text, word)) {
		count++;
		text = strstr(text, word) + strlen(word);
	}
	return(count);
}

int sentence_count(char* text) {//считает количество предложений в тексте
	int count = 0;
	while (strchr(text, '.')) {
		count++;
		text = strchr(text, '.') + 1;
	}
	return(count);
}
int comma_count(char* text) {//считает  количество зап€тых
	int comma_count = 0;
	while (strchr(text, ',')) {
		comma_count++;
		text = strchr(text, ',') + 1;
	}
	return(comma_count);
}

void reverse(char* text) {//переворачивает текст
	for (size_t i = 0; i < strlen(text) / 2; i++) {
		int flag = text[i];
		text[i] = text[strlen(text) - 1 - i];
		text[strlen(text) - 1 - i] = flag;
	}


}
int main() {
	//≈сть некоторый текст. »спользу€ стандартные
	//строковые функции 
	char text[] = "The Smiths live in a house. They have a living room. They ,watch TV in the living room. The father cooks food in the kitchen.";
	char word[20];
	cout << "Enter word you want to find in text-->";
	cin >> word;

	//1)
	cout << word_count(text, word);//ѕосчитайте количество вхождений слова, заданногопользователем;
	//2)
	cout << sentence_count(text);//ѕосчитайте количество предложений в тексте;
	//3)
	cout << comma_count(text);// оличество точек и зап€тых;
	//4)
	reverse(text);//ѕереверните весь текст целиком.
	for(size_t i = 0; i < strlen(text); i++){
		cout << text[i];
	}
	return(0);
}