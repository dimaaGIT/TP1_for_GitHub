#pragma once
#include "Ship.h"

struct KeeperItem {
	KeeperItem(Ship* item, KeeperItem* next);
	Ship* item;
	KeeperItem* next;
};