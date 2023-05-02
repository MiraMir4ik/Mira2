#include<iostream>
using namespace std;


struct iron
{
	char firm[20];
	char model[20];
	char color[10];
	float min_temp;
	float max_temp;
	bool steam;
	int power;
	
};

struct animal
{
	char animal[10];
	char clas[20];
	char nickname[10];

};

void animal_func(animal hamster) {
	cin >> hamster.animal>> hamster.clas>> hamster.nickname;
	cout << hamster.animal<<" " << hamster.clas <<" "<< hamster.nickname;
}

int main() {

	
	//1 Реализовать структуру «Утюг» (фирма, модель, цвет, минимальная температура, 
	//максимальная температура, подача пара (да/нет), мощность). Создайте экземпляр
	//структуры и проиллюстрируйте работу с ним.

	iron iron1 = { "Tefal","DST3010","blue",10,50,true,2000};

	cout <<iron1.power;
	cout << iron1.color;

	cin >> iron1.max_temp;
	cout << iron1.max_temp;


	//2  Разработать структуру, которая описывает животное (название, класс, кличка). 
	//Создать функции для работы с этой структурой:
	//заполнение объекта; вывод на экран данных об объекте

	animal hamster = {};
	animal_func(hamster);


	return(0);
}