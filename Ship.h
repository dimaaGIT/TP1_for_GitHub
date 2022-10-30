#pragma once
#include <iostream>

class Ship {
public:
	virtual void save_to_file() = 0;
	virtual void read_from_file() = 0;
	virtual void show() = 0;
	virtual ~Ship();
};