#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Ship {
public:
	virtual void saveToFile(ofstream& out) = 0;
	virtual void readFromFile(ifstream& in) = 0;
	virtual void show() = 0;
	virtual ~Ship();
};