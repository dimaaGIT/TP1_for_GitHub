#pragma once
#include "Ship.h"
#include <string>
using namespace std;

class Submarine : public Ship {
 public:
	Submarine();
	Submarine(string length, string width, string crew, string stay_under_water, string min_underwater_speed, string max_underwater_speed, string armament);
	void save_to_file();
	void read_from_file();
	void show();
	~Submarine();
private:
	string length;
	string width;
	string crew;
	string stay_under_water;
	string min_underwater_speed;
	string max_underwater_speed;
	string armament;
};