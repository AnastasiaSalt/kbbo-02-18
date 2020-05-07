#pragma once

#include "Shelf.h"
#include <vector>

using std::vector;

class BookShelf
{
public:
	BookShelf(int countShelfs, int countSlotsShelf);
	~BookShelf();
	void addBook(int idShelf, int idSlots, const PrintBook &book); // �������� ����� � ���� �� ������ ����� � ����� �� �����
	PrintBook getBook(int idShelf, int idSlots); // �������� ����� �� ����� �� ������ ����� � ����� �� �����
private:
	vector<Shelf> shelfs; // ��������� ����� �����
};

