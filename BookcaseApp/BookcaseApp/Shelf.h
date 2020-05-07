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

	void addBook(const PrintBook &book, int idSlot); // добавить книгу на полку
	PrintBook getBook(int idSlot); // получить книгу с полки по номеру ячейки
private:
	vector<PrintBook> printBooks; // хранилище книги на полке
};

