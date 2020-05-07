#include "stdafx.h"
#include "BookShelf.h"
#include <iostream>

using namespace std;

BookShelf::BookShelf(int countShelfs, int countSlotsShelf)
{
	// �������� ������ ���-�� ����� � ����
	for (size_t i = 0; i < countShelfs; ++i)
		shelfs.push_back(Shelf(countSlotsShelf));
}

BookShelf::~BookShelf()
{
}

void BookShelf::addBook(int idShelf, int idSlots, const PrintBook & book)
{
	int id = idShelf - 1;
	if (id >= 0 && id < shelfs.size()) // ���� ������ ���-�� ����� ����������
		shelfs[id].addBook(book, idSlots); // ���������
	else
		cout << "Wrong id shelf. Try again." << endl;
}

PrintBook BookShelf::getBook(int idShelf, int idSlots)
{
	int id = idShelf - 1;
	if (id >= 0 && id < shelfs.size()) // ���� ������ ���-�� ����� ����������
		return shelfs[id].getBook(idSlots); // ����������
}
