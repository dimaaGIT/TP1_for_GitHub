#pragma once
#include "Ship.h"
using namespace std;

struct KeeperItem {
	KeeperItem();
	KeeperItem(Ship* item, KeeperItem* next);
	void setItem(Ship* item);
	Ship* getItem();
	void setNext(KeeperItem* next);
	KeeperItem* getNext();
private:
	Ship* item;
	KeeperItem* next;
};