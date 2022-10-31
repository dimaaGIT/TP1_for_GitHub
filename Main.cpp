#include <iostream>
#include <Windows.h>
#include "Keeper.h"
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Keeper keeper;
	int mode = 0;
	while (true) {
		system("cls");
		cout << "1. �������� �������;" << endl
			<< "2. ������� �������;" << endl
			<< "3. �������� �������;" << endl
			<< "4. ��������� � ����;" << endl
			<< "5. ������������ �� �����;" << endl
			<< "6. ������� �� �����;" << endl
			<< "7. �����." << endl;
		cin >> mode;
		system("cls");
		switch (mode) {
		default: {
			cout << "������ ������ ���!" << endl;
			system("pause");
		}
			   break;
		case(1): {
			int type = 0;
			cout << "1. �������� ��������� �����;" << endl
				<< "2. �������� ��������;" << endl
				<< "3. �������� �����;" << endl;
			cin >> type;
			system("cls");
			switch (type) {
			case(1): {
				string length;
				string width;
				string crew;
				string stayUnderWater;
				string minUnderwaterSpeed;
				string maxUnderwaterSpeed;
				string armament;
				cout << "������� �����: " << endl;
				cin >> ws;
				getline(cin, length);
				cout << "������� ������: " << endl;
				getline(cin, width);
				cout << "������� ������: " << endl;
				getline(cin, crew);
				cout << "������� ����� ������������ ���������� ��� �����: " << endl;
				getline(cin, stayUnderWater);
				cout << "������� ����������� ��������� ��������: " << endl;
				getline(cin, minUnderwaterSpeed);
				cout << "������� ������������ ��������� ��������: " << endl;
				getline(cin, maxUnderwaterSpeed);
				cout << "������� ����������: " << endl;
				getline(cin, armament);
				keeper.add(new Submarine(length, width, crew, stayUnderWater, minUnderwaterSpeed, maxUnderwaterSpeed, armament));
			}
				   break;
			case(2): {
				string type;
				string name;
				string peaceful;
				string hullLength;
				string speed;
				string crew;
				cout << "������� ��� ���������: " << endl;
				cin >> ws;
				getline(cin, type);
				cout << "������� ��������: " << endl;
				getline(cin, name);
				cout << "������� ������ ��� �������: " << endl;
				getline(cin, peaceful);
				cout << "������� ����� �������: " << endl;
				getline(cin, hullLength);
				cout << "������� �������� �����������: " << endl;
				getline(cin, speed);
				cout << "������� ������: " << endl;
				getline(cin, crew);
				keeper.add(new Sailboat(type, name, peaceful, hullLength,
					speed, crew));
			}
				   break;
			case(3): {
				string purpose;
				string hullMaterial;
				string drivingCharacteristics;
				string speed;
				string numberOfPeople;
				cout << "������� ����������: " << endl;
				cin >> ws;
				getline(cin, purpose);
				cout << "������� �������� �������: " << endl;
				getline(cin, hullMaterial);
				cout << "������� ������� ��������: " << endl;
				getline(cin, drivingCharacteristics);
				cout << "������� ��������: " << endl;
				getline(cin, speed);
				cout << "������� ���������� �����, ������� ����� ��������� �� ����� : " << endl;
				getline(cin, numberOfPeople);
				keeper.add(new Speedboat(purpose, hullMaterial, drivingCharacteristics, speed, numberOfPeople));
			}
				   break;
			}
			system("cls");
			cout << "������� ��������" << endl;
			system("pause");
		}
			   break;
		case(2): {
			keeper.pop();
			cout << "������� �����!" << endl;
			system("pause");
		}
			   break;
		case(3): {
			int type = 0;
			int i;
			cout << "1. �������� �� ��������� �����;" << endl
				<< "2. �������� �� ��������;" << endl
				<< "3. �������� �� �����;" << endl;
			cin >> type;
			system("cls");
			switch (type) {
			case(1): {
				string length;
				string width;
				string crew;
				string stayUnderWater;
				string minUnderwaterSpeed;
				string maxUnderwaterSpeed;
				string armament;
				cout << "������� �����: " << endl;
				cin >> ws;
				getline(cin, length);
				cout << "������� ������: " << endl;
				getline(cin, width);
				cout << "������� ������: " << endl;
				getline(cin, crew);
				cout << "������� ����� ������������ ���������� ��� �����: " << endl;
				getline(cin, stayUnderWater);
				cout << "������� ����������� ��������� ��������: " << endl;
				getline(cin, minUnderwaterSpeed);
				cout << "������� ������������ ��������� ��������: " << endl;
				getline(cin, maxUnderwaterSpeed);
				cout << "������� ����������: " << endl;
				getline(cin, armament);
				cout << "������� ����� ��������, ������� ������ �������� (������� � 0) : ";
				cin >> i;
				Ship* temp = new Submarine(length, width, crew, stayUnderWater, minUnderwaterSpeed, maxUnderwaterSpeed, armament);
				bool result = keeper.edit(i, temp);
				system("cls");
				if (result) {
					cout << "������� ������!" << endl;
				}
				else {
					delete temp;
					cout << "������� �� ������� ��������!" << endl;
				}
			}
				   break;
			case(2): {
				string type;
				string name;
				string peaceful;
				string hullLength;
				string speed;
				string crew;
				cout << "������� ��� ���������: " << endl;
				cin >> ws;
				getline(cin, type);
				cout << "������� ��������: " << endl;
				getline(cin, name);
				cout << "������� ������ ��� �������: " << endl;
				getline(cin, peaceful);
				cout << "������� ����� �������: " << endl;
				getline(cin, hullLength);
				cout << "������� �������� �����������: " << endl;
				getline(cin, speed);
				cout << "������� ������: " << endl;
				getline(cin, crew);
				cout << "������� ����� ��������, ������� ������ �������� (������� � 0) : ";
				cin >> i;
				Ship* temp = new Sailboat(type, name, peaceful, hullLength, speed, crew);
				bool result = keeper.edit(i, temp);
				system("cls");
				if (result) {
					cout << "������� ������!" << endl;
				}
				else {
					delete temp;
					cout << "������� �� ������� ��������!" << endl;
				}
			}
				   break;
			case(3): {
				string purpose;
				string hullMaterial;
				string drivingCharacteristics;
				string speed;
				string numberOfPeople;
				cout << "������� ����������: " << endl;
				cin >> ws;
				getline(cin, purpose);
				cout << "������� �������� �������: " << endl;
				getline(cin, hullMaterial);
				cout << "������� ������� ��������: " << endl;
				getline(cin, drivingCharacteristics);
				cout << "������� ��������: " << endl;
				getline(cin, speed);
				cout << "������� ���������� �����, ������� ����� ��������� �� ����� : " << endl;
				getline(cin, numberOfPeople);
				cout << "������� ����� ��������, ������� ������ �������� (������� � 0) : ";
					cin >> i;
				Ship* temp = new Speedboat(purpose, hullMaterial,
					drivingCharacteristics, speed, numberOfPeople);
				bool result = keeper.edit(i, temp);
				system("cls");
				if (result) {
					cout << "������� ������!" << endl;
				}
				else {
					delete temp;
					cout << "������� �� ������� ��������!" << endl;
				}
			}
				   break;
			}
			system("pause");
		}
			   break;
		case(4): {
			keeper.saveToFile();
			cout << "������� ���������� ��������!" << endl;
			system("pause");
		}
			   break;
		case(5): {
			keeper.readFromFile();
			cout << "������� �������������� ��������!" << endl;
			system("pause");
		}
			   break;
		case(6): {
			keeper.show();
			system("pause");
		}
			   break;
		case(7): {
			cout << "����� �� ���������" << endl
				<< " . " << endl
				<< " . " << endl
				<< " . " << endl
				<< "�� ����� ������! :)" << endl;
			system("pause");
		}
			   break;
		}
		if (mode == 7) {
			break;
		}
	}
	system("cls");
}