#include "Keeper.h"
using namespace std;
Keeper::Keeper() {
	cout << "?????? ??????????? Keeper ?? ?????????" << endl;
	first = nullptr;
}
Keeper::~Keeper() {
	cout << "?????? ?????????? Keeper" << endl;
	while (first != nullptr) {
		KeeperItem* now = first;
		first = first->getNext();
		delete now->getItem();
		delete now;
	}
}
void Keeper::saveToFile() {
	ofstream fout;
	try {
		openFileToSave(fout);
		KeeperItem* now = first;
		while (now != nullptr) {
			now->getItem()->saveToFile(fout);
			fout << "\n";
			now = now->getNext();
		}
		fout.close();
	}
	catch (const exception& ex) {
		cout << "???????? ??????!\n ?????????? ?? ??????: " << ex.what() <<
			endl;
	}
}
void Keeper::readFromFile() {
	while (first != nullptr) {
		KeeperItem* now = first;
		first = first->getNext();
		delete now->getItem();
		delete now;
	}
	first = nullptr;
	ifstream fin;
	try {
		openFileToRead(fin);
		if (!fin.eof()) {
			string data;
			getline(fin, data);
			if (data == "????????? ?????:") {
				first = new KeeperItem(new Submarine, nullptr);
				first->getItem()->readFromFile(fin);
			}
			else if (data == "????????:") {
				first = new KeeperItem(new Sailboat, nullptr);
				first->getItem()->readFromFile(fin);
			}
			else if (data == "?????:") {
				first = new KeeperItem(new Speedboat, nullptr);
				first->getItem()->readFromFile(fin);
			}
			if (first != nullptr) {
				KeeperItem* now = first;
				getline(fin, data);
				while (!fin.eof()) {
					getline(fin, data);
					if (data == "????????? ?????:") {
						now->setNext(new KeeperItem(new Submarine,
							nullptr));
						now->getNext()->getItem()->readFromFile(fin);
					}
					else if (data == "????????:") {
						now->setNext(new KeeperItem(new Sailboat,
							nullptr));
						now->getNext()->getItem()->readFromFile(fin);
					}
					else if (data == "?????:") {
						now->setNext(new KeeperItem(new Speedboat,
							nullptr));
						now->getNext()->getItem()->readFromFile(fin);
					}
					getline(fin, data);
					now = now->getNext();
				}
			}
		}
		fin.close();
	}
	catch (const exception& ex) {
		cout << "???????? ??????!\n ?????????? ?? ??????: " << ex.what() <<
			endl;
	}
}
void Keeper::add(Ship* item) {
	if (first != nullptr) {
		KeeperItem* now = first;
		while (now->getNext() != nullptr) {
			now = now->getNext();
		}
		now->setNext(new KeeperItem(item, nullptr));
	}
	else {
		first = new KeeperItem(item, nullptr);
	}
}
bool Keeper::edit(size_t i, Ship* item) {
	if (first != nullptr) {
		KeeperItem* now = first;
		size_t max_i = 0;
		while (now->getNext() != nullptr) {
			now = now->getNext();
			max_i++;
		}
		if (max_i >= i) {
			now = first;
			while (i != 0) {
				now = now->getNext();
				--i;
			}
			delete now->getItem();
			now->setItem(item);
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}
void Keeper::show() {
	KeeperItem* now = first;
	while (now != nullptr) {
		now->getItem()->show();
		cout << "\n";
		now = now->getNext();
	}
}
void Keeper::pop() {
	if (first != nullptr && first->getNext() != nullptr) {
		KeeperItem* now = first;
		while (now->getNext()->getNext() != nullptr) {
			now = now->getNext();
		}
		delete now->getNext()->getItem();
		delete now->getNext();
		now->setNext(nullptr);
	}
	else if (first != nullptr) {
		delete first->getItem();
		delete first;
		first = nullptr;
	}
}
void Keeper::openFileToSave(ofstream& out) {
	out.open("File.txt");
	if (!out.is_open()) {
		throw exception("?? ??????? ??????? ???? ??? ??????????!");
	}
}
void Keeper::openFileToRead(ifstream& in) {
	in.open("File.txt");
	if (!in.is_open()) {
		throw exception("?? ??????? ??????? ???? ??? ??????!");
	}
}
