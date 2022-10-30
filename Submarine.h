#pragma once
#include "Ship.h"
using namespace std;

class Submarine : public Ship {
 public:
	Submarine();
	Submarine(string length, string width, string crew, string stayUnderWater, string minUnderwaterSpeed, string maxUnderwaterSpeed, string armament);
	void saveToFile(ofstream& out);
	void readFromFile(ifstream& in);
	void show();
private:
	string length;
	string width;
	string crew;
	string stayUnderWater;
	string minUnderwaterSpeed;
	string maxUnderwaterSpeed;
	string armament;
};