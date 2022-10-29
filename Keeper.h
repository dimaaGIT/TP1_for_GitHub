#pragma once
#include "KeeperItem.h"

class Keeper {
public:
	Keeper();
	Keeper(const Keeper& other);
	void save_to_file();
	void read_from_file();
	void add();
	void pop();
	~Keeper();
private:
	KeeperItem* first;
	KeeperItem* last;
};