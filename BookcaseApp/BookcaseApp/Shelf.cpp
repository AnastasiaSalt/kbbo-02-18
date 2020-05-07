#include "stdafx.h"
#include "Shelf.h"
#include <iostream>

using namespace std;

Shelf::Shelf()
{
}

Shelf::Shelf(int countSlotsShelf)
{
	for (size_t i = 0; i < countSlotsShelf; ++i)
		printBooks.push_back(PrintBook());
}

Shelf::~Shelf()
{
}

void Shelf::addBook(const PrintBook & book, int idSlot)
{
	int id = idSlot - 1;
	if (id >= 0 && id < printBooks.size()) // ���� ������ ���-�� ����� �� ����� ����������
		printBooks[id] = book; // �������� �����
	else
		cout << "Wrong id slot. Try again." << endl;
}

PrintBook Shelf::getBook(int idSlot)
{
	int id = idSlot - 1;
	if (id >= 0 && id < printBooks.size()) // ���� ������ ���-�� ����� �� ����� ����������
		return printBooks[id];  // ���������� �����
	else
		return PrintBook();
}
