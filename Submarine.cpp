#include "Submarine.h"
using namespace std;

void Submarine::saveToFile(ofstream& out) {
	out << "Подводная лодка:\n"
		<< "Длина: " << this->length << "\n"
		<< "Ширина: " << this->width << "\n"
		<< "Экипаж: " << this->crew << "\n"
		<< "Время непрерывного пребывания под водой: " << this->stayUnderWater << "\n"
		<< "Минимальная подводная скорость: " << this->minUnderwaterSpeed << "\n"
		<< "Максимальная подводная скорость: " << this->maxUnderwaterSpeed << "\n"
		<< "Вооружение: " << this->armament << "\n";
}

void Submarine::readFromFile(ifstream& in) {
	std::string data;
	in >> data;
	in.get();
	getline(in, this->length);
	in >> data;
	in.get();
	getline(in, this->width);
	in >> data;
	in.get();
	getline(in, this->crew);
	in >> data;
	in >> data;
	in >> data;
	in >> data;
	in >> data;
	in.get();
	getline(in, this->stayUnderWater);
	in >> data;
	in >> data;
	in >> data;
	in.get();
	getline(in, this->minUnderwaterSpeed);
	in >> data;
	in >> data;
	in >> data;
	in.get();
	getline(in, this->maxUnderwaterSpeed);
	in >> data;
	in.get();
	getline(in, this->armament);
}

Submarine::Submarine() {
	cout << "Вызван конструктор Submarine по умолчанию" << endl;
	length = "Не задано";
	width = "Не задано";
	crew = "Не задано";
	stayUnderWater = "Не задано";
	minUnderwaterSpeed = "Не задано";
	maxUnderwaterSpeed = "Не задано";
	armament = "Не задано";
}

Submarine::Submarine(string length, string width, string crew, string
	stayUnderWater, string minUnderwaterSpeed, string maxUnderwaterSpeed, string
	armament) {
	cout << "Вызван конструктор Submarine от семи параметров" << endl;
	this->length = length;
	this->width = width;
	this->crew = crew;
	this->stayUnderWater = stayUnderWater;
	this->minUnderwaterSpeed = minUnderwaterSpeed;
	this->maxUnderwaterSpeed = maxUnderwaterSpeed;
	this->armament = armament;
}

void Submarine::show() {
	cout << "Подводная лодка:\n"
		<< "Длина: " << this->length << "\n"
		<< "Ширина: " << this->width << "\n"
		<< "Экипаж: " << this->crew << "\n"
		<< "Время непрерывного пребывания под водой: " << this->stayUnderWater << "\n"
		<< "Минимальная подводная скорость: " << this->minUnderwaterSpeed << "\n"
		<< "Максимальная подводная скорость: " << this->maxUnderwaterSpeed << "\n"
		<< "Вооружение: " << this->armament << "\n";
}
