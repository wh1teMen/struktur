// персональный шаблон C++
#include<iostream>
using namespace std;
struct coordinates {
	int x;
	int y;

};
//выводит значение полей
void showCoordinates(coordinates &C) {
	C.x = 0;
	C.y = 0;
	//cout << &C << endl;
	//cout << "X = " << C.x << endl;
	//cout << "Y = " << C.y << endl;
}
coordinates inputObj() {
	coordinates newObj;
	cout << "Введите Х: ";
	cin >> newObj.x;
	cout << "Введите Y: ";
	cin >> newObj.y;
	return newObj;
}
void fillObj(coordinates& C) {
	cout << "Введите Х: ";
	cin >> C.x;
	cout << "Введите Y: ";
	cin >> C.y;
}
int main() {
	setlocale(LC_ALL, "ru");
	int n;
	/*Синтаксис создания структуры*/
	//struct имя_структуры{
	//данные структуры
	//};

	/*struct date {
		int day;
		int month;
		int year;
		string note="Значение по умолчанию";
	} birthday,date1; 

	birthday.day = 10;
	birthday.month = 5;
	birthday.year = 1970;
	birthday.note = "ДР Ивана";

	date1 = { 18,3,2022,"Homeworks" };
	cout << birthday.day << "." << birthday.month << "." << birthday.year << " ------> " << birthday.note   << endl;
	date1.day += 10;
	date1.month = 7;
	cin>>date1.year;
	date1. note += "!";
	cout << date1.day << "." << date1.month << "." << date1.year << " ------> " << date1.note  << endl;

	date date2 = {2,3,2000,"date 2"};
	cout << date2.day << "." << date2.month << "." << date2.year << " ------> " << date2.note << endl;*/
	

	/*struct date {
		int day;
		int month;
		int year;

	};
	struct person	{
		string name;
		date birthday;
	}Tom;
	Tom.name = "Tom Smith";
	Tom.birthday = { 1,2,1998 };
	//Tom.birthday.day = 20;
	cout << Tom.name << endl;
	cout << Tom.birthday.day << "." << Tom.birthday.month << "." << Tom.birthday.year << endl;
	person Bob = {"Bob",{15,6,2000} };
	
	cout << Bob.name << endl;
	cout << Bob.birthday.day << "." << Bob.birthday.month << "." << Bob.birthday.year << endl;

	person* pB = &Bob;
	pB->name = "BOB THOMSAN";//меняем имя через указатель
	cout << pB->name << endl;//указатель на объект Bob
	cout << Bob.name << endl;//поменяли объект через указатель 
	pB = &Tom;//перенаправляем указатель на другой объект
	cout << pB->name << endl;*/
	
	coordinates pointA = { 5,5 };
	coordinates pointB = { 9,0 };
	coordinates pointC = { 3,10 };
	coordinates pointE;
	fillObj(pointE);
	cout << "E.X = " << pointE.x << "\nE.Y = " << pointE.y << endl;




	//coordinates poindD = inputObj();
	//cout << poindD.x << "\t" << poindD.y << endl;
	//pointA = inputObj();
	//cout << pointA.x << "\t" << pointA.y << endl;
	
	//cout << inputObj().x << endl;



	/*cout << "Point A:\n";
	showCoordinates(pointA);
	cout << "Point B:\n";
	showCoordinates(pointB);
	cout << "Point C:\n";
	showCoordinates(pointC);*/
	//cout << &pointA << endl;
	//showCoordinates(pointA);
	//cout << pointA.x << " " << pointA.y << endl;











	system("pause>nul");
	return 0;
}