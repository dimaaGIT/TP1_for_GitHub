#pragma once
#include "Ship.h"
#include <string>
using namespace std;

class Speedboat : public Ship {
public:
	Speedboat();
	Speedboat(string purpose, string hull_material, string driving_characteristics, string speed, string number_of_people);
	void save_to_file() = 0;
	void read_from_file() = 0;
	void show() = 0;
	~Speedboat();
private:
	string purpose;
	string hull_material;
	string driving_characteristics;
	string speed;
	string number_of_people;
};