#include "Sailboat.h"
using namespace std;

void Sailboat::saveToFile(ofstream& out) {
	out << "Парусник:\n"
		<< "Тип парусника: " << this->type << "\n"
		<< "Название: " << this->name << "\n"
		<< "Мирный или военный: " << this->peaceful << "\n"
		<< "Длина корпуса: " << this->hullLength << "\n"
		<< "Скорость перемещения: " << this->speed << "\n"
		<< "Экипаж: " << this->crew << "\n";
}

void Sailboat::readFromFile(ifstream& in) {
	std::string data;
	in >> data;
	in >> data;
	in.get();
	getline(in, this->type);
	in >> data;
	in.get();
	getline(in, this->name);
	in >> data;
	in >> data;
	in >> data;
	in.get();
	getline(in, this->peaceful);
	in >> data;
	in >> data;
	in.get();
	getline(in, this->hullLength);
	in >> data;
	in >> data;
	in.get();
	getline(in, this->speed);
	in >> data;
	in.get();
	getline(in, this->crew);
}

Sailboat::Sailboat() {
	cout << "Вызван конструктор Sailboat по умолчанию" << endl;
	type = "Не задано";
	name = "Не задано";
	peaceful = "Не задано";
	hullLength = "Не задано";
	speed = "Не задано";
	crew = "Не задано";
}

Sailboat::Sailboat(string type, string name, string peaceful, string hullLength, string speed, string crew) {
	cout << "Вызван конструктор Sailboat от шести параметров" << endl;
	this->type = type;
	this->name = name;
	this->peaceful = peaceful;
	this->hullLength = hullLength;
	this->speed = speed;
	this->crew = crew;
}

void Sailboat::show() {
	cout << "Парусник:\n"
		 << "Тип парусника: " << this->type << "\n"
		 << "Название: " << this->name << "\n"
		 << "Мирный или военный: " << this->peaceful << "\n"
		 << "Длина корпуса: " << this->hullLength << "\n"
		 << "Скорость перемещения: " << this->speed << "\n"
		 << "Экипаж: " << this->crew << "\n";
}