#include "stdafx.h"
#include "BookShelf.h"
#include <iostream>

using namespace std;

BookShelf::BookShelf(int countShelfs, int countSlotsShelf)
{
	// помещаем нужное кол-во полок в шкаф
	for (size_t i = 0; i < countShelfs; ++i)
		shelfs.push_back(Shelf(countSlotsShelf));
}

BookShelf::~BookShelf()
{
}

void BookShelf::addBook(int idShelf, int idSlots, const PrintBook & book)
{
	int id = idShelf - 1;
	if (id >= 0 && id < shelfs.size()) // если нужное кол-во полок существует
		shelfs[id].addBook(book, idSlots); // добавляем
	else
		cout << "Wrong id shelf. Try again." << endl;
}

PrintBook BookShelf::getBook(int idShelf, int idSlots)
{
	int id = idShelf - 1;
	if (id >= 0 && id < shelfs.size()) // если нужное кол-во полок существует
		return shelfs[id].getBook(idSlots); // возвращаем
}
