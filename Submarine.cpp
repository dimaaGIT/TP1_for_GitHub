#include "Submarine.h"
using namespace std;

void Submarine::saveToFile(ofstream& out) {
	out << "��������� �����:\n"
		<< "�����: " << this->length << "\n"
		<< "������: " << this->width << "\n"
		<< "������: " << this->crew << "\n"
		<< "����� ������������ ���������� ��� �����: " << this->stayUnderWater << "\n"
		<< "����������� ��������� ��������: " << this->minUnderwaterSpeed << "\n"
		<< "������������ ��������� ��������: " << this->maxUnderwaterSpeed << "\n"
		<< "����������: " << this->armament << "\n";
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
	cout << "������ ����������� Submarine �� ���������" << endl;
	length = "�� ������";
	width = "�� ������";
	crew = "�� ������";
	stayUnderWater = "�� ������";
	minUnderwaterSpeed = "�� ������";
	maxUnderwaterSpeed = "�� ������";
	armament = "�� ������";
}

Submarine::Submarine(string length, string width, string crew, string
	stayUnderWater, string minUnderwaterSpeed, string maxUnderwaterSpeed, string
	armament) {
	cout << "������ ����������� Submarine �� ���� ����������" << endl;
	this->length = length;
	this->width = width;
	this->crew = crew;
	this->stayUnderWater = stayUnderWater;
	this->minUnderwaterSpeed = minUnderwaterSpeed;
	this->maxUnderwaterSpeed = maxUnderwaterSpeed;
	this->armament = armament;
}

void Submarine::show() {
	cout << "��������� �����:\n"
		<< "�����: " << this->length << "\n"
		<< "������: " << this->width << "\n"
		<< "������: " << this->crew << "\n"
		<< "����� ������������ ���������� ��� �����: " << this->stayUnderWater << "\n"
		<< "����������� ��������� ��������: " << this->minUnderwaterSpeed << "\n"
		<< "������������ ��������� ��������: " << this->maxUnderwaterSpeed << "\n"
		<< "����������: " << this->armament << "\n";
}
