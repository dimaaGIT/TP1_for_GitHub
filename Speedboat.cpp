#include "Speedboat.h"
using namespace std;

void Speedboat::saveToFile(ofstream& out) {
	out << "�����:\n"
		<< "����������: " << this->purpose << "\n"
		<< "�������� �������: " << this->hullMaterial << "\n"
		<< "������� ��������: " << this->drivingCharacteristics << "\n"
		<< "��������: " << this->speed << "\n"
		<< "���������� �����, ������� ����� ��������� �� �����: " << this->numberOfPeople << "\n";
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
	cout << "������ ����������� Speedboat �� ���������" << endl;
	purpose = "�� ������";
	hullMaterial = "�� ������";
	drivingCharacteristics = "�� ������";
	speed = "�� ������";
	numberOfPeople = "�� ������";
}

Speedboat::Speedboat(string purpose, string hullMaterial, string drivingCharacteristics, string speed, string numberOfPeople) {
	cout << "������ ����������� Speedboat �� ���� ����������" << endl;
	this->purpose = purpose;
	this->hullMaterial = hullMaterial;
	this->drivingCharacteristics = drivingCharacteristics;
	this->speed = speed;
	this->numberOfPeople = numberOfPeople;
}

void Speedboat::show() {
	cout << "�����:\n"
		<< "����������: " << this->purpose << "\n"
		<< "�������� �������: " << this->hullMaterial << "\n"
		<< "������� ��������: " << this->drivingCharacteristics << "\n"
		<< "��������: " << this->speed << "\n"
		<< "���������� �����, ������� ����� ��������� �� �����: " << this->numberOfPeople << "\n";
}