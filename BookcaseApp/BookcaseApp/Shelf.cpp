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
	if (id >= 0 && id < printBooks.size()) // если нужное кол-во ячеек на полке существует
		printBooks[id] = book; // помещаем книгу
	else
		cout << "Wrong id slot. Try again." << endl;
}

PrintBook Shelf::getBook(int idSlot)
{
	int id = idSlot - 1;
	if (id >= 0 && id < printBooks.size()) // если нужное кол-во ячеек на полке существует
		return printBooks[id];  // возвращаем книгу
	else
		return PrintBook();
}
