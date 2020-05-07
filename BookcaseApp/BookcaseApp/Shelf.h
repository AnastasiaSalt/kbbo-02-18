#pragma once

#include <vector>
#include "PrintBook.h"

using std::vector;

class Shelf
{
public:
	Shelf();
	Shelf(int countSlotsShelf);
	~Shelf();

	void addBook(const PrintBook &book, int idSlot); // �������� ����� �� �����
	PrintBook getBook(int idSlot); // �������� ����� � ����� �� ������ ������
private:
	vector<PrintBook> printBooks; // ��������� ����� �� �����
};

