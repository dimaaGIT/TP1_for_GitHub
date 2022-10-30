#include "Sailboat.h"
using namespace std;

void Sailboat::saveToFile(ofstream& out) {
	out << "��������:\n"
		<< "��� ���������: " << this->type << "\n"
		<< "��������: " << this->name << "\n"
		<< "������ ��� �������: " << this->peaceful << "\n"
		<< "����� �������: " << this->hullLength << "\n"
		<< "�������� �����������: " << this->speed << "\n"
		<< "������: " << this->crew << "\n";
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
	cout << "������ ����������� Sailboat �� ���������" << endl;
	type = "�� ������";
	name = "�� ������";
	peaceful = "�� ������";
	hullLength = "�� ������";
	speed = "�� ������";
	crew = "�� ������";
}

Sailboat::Sailboat(string type, string name, string peaceful, string hullLength, string speed, string crew) {
	cout << "������ ����������� Sailboat �� ����� ����������" << endl;
	this->type = type;
	this->name = name;
	this->peaceful = peaceful;
	this->hullLength = hullLength;
	this->speed = speed;
	this->crew = crew;
}

void Sailboat::show() {
	cout << "��������:\n"
		 << "��� ���������: " << this->type << "\n"
		 << "��������: " << this->name << "\n"
		 << "������ ��� �������: " << this->peaceful << "\n"
		 << "����� �������: " << this->hullLength << "\n"
		 << "�������� �����������: " << this->speed << "\n"
		 << "������: " << this->crew << "\n";
}