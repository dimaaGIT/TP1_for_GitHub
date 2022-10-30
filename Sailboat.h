#pragma once
#include "Ship.h"
#include <string>
using namespace std;

class Sailboat : public Ship {
public:
	Sailboat();
	Sailboat(string type, string name, string peaceful, string hull_length, string speed, string crew);
	void save_to_file();
	void read_from_file();
	void show();
	~Sailboat();
private:
	string type;
	string name;
	string peaceful;
	string hull_length;
	string speed;
	string crew;
};