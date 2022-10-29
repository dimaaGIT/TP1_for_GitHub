#include "KeeperItem.h"
using namespace std;

KeeperItem::KeeperItem(Ship* item, KeeperItem* next) {
	this->item = item;
	this->next = next;
}