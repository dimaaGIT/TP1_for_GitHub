#include "Speedboat.h"
using namespace std;

void Speedboat::saveToFile(ofstream& out) {
	out << "Катер:\n"
		<< "Назначение: " << this->purpose << "\n"
		<< "Материал корпуса: " << this->hullMaterial << "\n"
		<< "Ходовые качества: " << this->drivingCharacteristics << "\n"
		<< "Скорость: " << this->speed << "\n"
		<< "Количество людей, которые могут находится на борту: " << this->numberOfPeople << "\n";
}

void Speedboat::readFromFile(ifstream& in) {
	std::string data;
	in >> data;
	in.get();
	getline(in, this->purpose);
	in >> data;
	in >> data;
	in.get();
	getline(in, this->hullMaterial);
	in >> data;
	in >> data;
	in.get();
	getline(in, this->drivingCharacteristics);
	in >> data;
	in.get();
	getline(in, this->speed);
	in >> data;
	in >> data;
	in >> data;
	in >> data;
	in >> data;
	in >> data;
	in >> data;
	in.get();
	getline(in, this->numberOfPeople);
}

Speedboat::Speedboat() {
	cout << "Вызван конструктор Speedboat по умолчанию" << endl;
	purpose = "Не задано";
	hullMaterial = "Не задано";
	drivingCharacteristics = "Не задано";
	speed = "Не задано";
	numberOfPeople = "Не задано";
}

Speedboat::Speedboat(string purpose, string hullMaterial, string drivingCharacteristics, string speed, string numberOfPeople) {
	cout << "Вызван конструктор Speedboat от пяти параметров" << endl;
	this->purpose = purpose;
	this->hullMaterial = hullMaterial;
	this->drivingCharacteristics = drivingCharacteristics;
	this->speed = speed;
	this->numberOfPeople = numberOfPeople;
}

void Speedboat::show() {
	cout << "Катер:\n"
		<< "Назначение: " << this->purpose << "\n"
		<< "Материал корпуса: " << this->hullMaterial << "\n"
		<< "Ходовые качества: " << this->drivingCharacteristics << "\n"
		<< "Скорость: " << this->speed << "\n"
		<< "Количество людей, которые могут находится на борту: " << this->numberOfPeople << "\n";
}