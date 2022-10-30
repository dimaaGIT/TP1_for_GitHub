#include "KeeperItem.h"
using namespace std;

KeeperItem::KeeperItem(Ship* item, KeeperItem* next) {
	cout << "������ ����������� KeeperItem �� ���� ����������" << endl;
	this->item = item;
	this->next = next;
}

KeeperItem::KeeperItem() {
	cout << "������ ����������� KeeperItem �� ���������" << endl;
	this->item = nullptr;
	this->next = nullptr;
}

void KeeperItem::setItem(Ship* item) {
	this->item = item;
}

Ship* KeeperItem::getItem() {
	return item;
}

void KeeperItem::setNext(KeeperItem* next) {
	this->next = next;
}

KeeperItem* KeeperItem::getNext() {
	return next;
}
