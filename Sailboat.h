#pragma once
#include "Ship.h"
using namespace std;

class Sailboat : public Ship {
public:
	Sailboat();
	Sailboat(string type, string name, string peaceful, string hullLength, string speed, string crew);
	void saveToFile(ofstream& out);
	void readFromFile(ifstream& in);
	void show();
private:
	string type;
	string name;
	string peaceful;
	string hullLength;
	string speed;
	string crew;
};