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
		cout << "1. Добавить корабль;" << endl
			<< "2. Удалить корабль;" << endl
			<< "3. Заменить корабль;" << endl
			<< "4. Сохранить в файл;" << endl
			<< "5. Восстановить из файла;" << endl
			<< "6. Вывести на экран;" << endl
			<< "7. Выход." << endl;
		cin >> mode;
		system("cls");
		switch (mode) {
		default: {
			cout << "Такого пункта нет!" << endl;
			system("pause");
		}
			   break;
		case(1): {
			int type = 0;
			cout << "1. Добавить подводную лодку;" << endl
				<< "2. Добавить парусник;" << endl
				<< "3. Добавить катер;" << endl;
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
				cout << "Введите длину: " << endl;
				cin >> ws;
				getline(cin, length);
				cout << "Введите ширину: " << endl;
				getline(cin, width);
				cout << "Введите экипаж: " << endl;
				getline(cin, crew);
				cout << "Введите время непрерывного пребывания под водой: " << endl;
				getline(cin, stayUnderWater);
				cout << "Введите минимальную подводную скорость: " << endl;
				getline(cin, minUnderwaterSpeed);
				cout << "Введите максимальную подводную скорость: " << endl;
				getline(cin, maxUnderwaterSpeed);
				cout << "Введите вооружение: " << endl;
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
				cout << "Введите тип парусника: " << endl;
				cin >> ws;
				getline(cin, type);
				cout << "Введите название: " << endl;
				getline(cin, name);
				cout << "Введите мирный или военный: " << endl;
				getline(cin, peaceful);
				cout << "Введите длину корпуса: " << endl;
				getline(cin, hullLength);
				cout << "Введите скорость перемещения: " << endl;
				getline(cin, speed);
				cout << "Введите экипаж: " << endl;
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
				cout << "Введите назначение: " << endl;
				cin >> ws;
				getline(cin, purpose);
				cout << "Введите материал корпуса: " << endl;
				getline(cin, hullMaterial);
				cout << "Введите ходовые качества: " << endl;
				getline(cin, drivingCharacteristics);
				cout << "Введите скорость: " << endl;
				getline(cin, speed);
				cout << "Введите количество людей, которые могут находится на борту : " << endl;
				getline(cin, numberOfPeople);
				keeper.add(new Speedboat(purpose, hullMaterial, drivingCharacteristics, speed, numberOfPeople));
			}
				   break;
			}
			system("cls");
			cout << "Корабль добавлен" << endl;
			system("pause");
		}
			   break;
		case(2): {
			keeper.pop();
			cout << "Корабль удалён!" << endl;
			system("pause");
		}
			   break;
		case(3): {
			int type = 0;
			int i;
			cout << "1. Заменить на подводную лодку;" << endl
				<< "2. Заменить на парусник;" << endl
				<< "3. Заменить на катер;" << endl;
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
				cout << "Введите длину: " << endl;
				cin >> ws;
				getline(cin, length);
				cout << "Введите ширину: " << endl;
				getline(cin, width);
				cout << "Введите экипаж: " << endl;
				getline(cin, crew);
				cout << "Введите время непрерывного пребывания под водой: " << endl;
				getline(cin, stayUnderWater);
				cout << "Введите минимальную подводную скорость: " << endl;
				getline(cin, minUnderwaterSpeed);
				cout << "Введите максимальную подводную скорость: " << endl;
				getline(cin, maxUnderwaterSpeed);
				cout << "Введите вооружение: " << endl;
				getline(cin, armament);
				cout << "Введите номер элемента, который хотите заменить (начиная с 0) : ";
				cin >> i;
				Ship* temp = new Submarine(length, width, crew, stayUnderWater, minUnderwaterSpeed, maxUnderwaterSpeed, armament);
				bool result = keeper.edit(i, temp);
				system("cls");
				if (result) {
					cout << "Корабль заменён!" << endl;
				}
				else {
					delete temp;
					cout << "Корабль не удалось заменить!" << endl;
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
				cout << "Введите тип парусника: " << endl;
				cin >> ws;
				getline(cin, type);
				cout << "Введите название: " << endl;
				getline(cin, name);
				cout << "Введите мирный или военный: " << endl;
				getline(cin, peaceful);
				cout << "Введите длину корпуса: " << endl;
				getline(cin, hullLength);
				cout << "Введите скорость перемещения: " << endl;
				getline(cin, speed);
				cout << "Введите экипаж: " << endl;
				getline(cin, crew);
				cout << "Введите номер элемента, который хотите заменить (начиная с 0) : ";
				cin >> i;
				Ship* temp = new Sailboat(type, name, peaceful, hullLength, speed, crew);
				bool result = keeper.edit(i, temp);
				system("cls");
				if (result) {
					cout << "Корабль заменён!" << endl;
				}
				else {
					delete temp;
					cout << "Корабль не удалось заменить!" << endl;
				}
			}
				   break;
			case(3): {
				string purpose;
				string hullMaterial;
				string drivingCharacteristics;
				string speed;
				string numberOfPeople;
				cout << "Введите назначение: " << endl;
				cin >> ws;
				getline(cin, purpose);
				cout << "Введите материал корпуса: " << endl;
				getline(cin, hullMaterial);
				cout << "Введите ходовые качества: " << endl;
				getline(cin, drivingCharacteristics);
				cout << "Введите скорость: " << endl;
				getline(cin, speed);
				cout << "Введите количество людей, которые могут находится на борту : " << endl;
				getline(cin, numberOfPeople);
				cout << "Введите номер элемента, который хотите заменить (начиная с 0) : ";
					cin >> i;
				Ship* temp = new Speedboat(purpose, hullMaterial,
					drivingCharacteristics, speed, numberOfPeople);
				bool result = keeper.edit(i, temp);
				system("cls");
				if (result) {
					cout << "Корабль заменён!" << endl;
				}
				else {
					delete temp;
					cout << "Корабль не удалось заменить!" << endl;
				}
			}
				   break;
			}
			system("pause");
		}
			   break;
		case(4): {
			keeper.saveToFile();
			cout << "Процесс сохранения закончен!" << endl;
			system("pause");
		}
			   break;
		case(5): {
			keeper.readFromFile();
			cout << "Процесс восстановления закончен!" << endl;
			system("pause");
		}
			   break;
		case(6): {
			keeper.show();
			system("pause");
		}
			   break;
		case(7): {
			cout << "Выход из программы" << endl
				<< " . " << endl
				<< " . " << endl
				<< " . " << endl
				<< "До новых встреч! :)" << endl;
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