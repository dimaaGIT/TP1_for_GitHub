#pragma once
#include "KeeperItem.h"
#include "Submarine.h"
#include "Sailboat.h"
#include "Speedboat.h"
#include <fstream>
using namespace std;

class Keeper {
public:
	Keeper();
	void saveToFile();
	void readFromFile();
	void add(Ship* item);
	Ship* operator[](size_t i);
	void pop();
	~Keeper();
private:
	void openFileToSave(ofstream& out);
	void openFileToRead(ifstream& in);
	Keeper(const Keeper& other);
	Keeper& operator=(const Keeper& other);
	KeeperItem* first;
};