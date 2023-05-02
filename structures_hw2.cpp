#include<iostream>
using namespace std;

struct student {
	char surname[20];
	short group_number : 4;
	bool gender:1;
	bool job:1;
};
int main() {
	//Создать структуру, содержащую информацию о студентах :
	//фамилия, номер группы(от 1 до 10), мальчик / девочка(0 / 1), программист / дизайнер(0 / 1).
	//	Все члены структуры, кроме первого, -битовые поля

	student Mira = { "Madani",10,1,0 };


	return(0);
}