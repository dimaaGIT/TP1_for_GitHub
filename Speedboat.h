#pragma once
#include "Ship.h"
using namespace std;

class Speedboat : public Ship {
public:
	Speedboat();
	Speedboat(string purpose, string hullMaterial, string drivingCharacteristics,
		string speed, string numberOfPeople);
	void saveToFile(ofstream& out);
	void readFromFile(ifstream& in);
	void show();
private:
	string purpose;
	string hullMaterial;
	string drivingCharacteristics;
	string speed;
	string numberOfPeople;
};
