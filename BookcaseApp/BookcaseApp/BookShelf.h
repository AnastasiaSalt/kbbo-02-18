#pragma once

#include "Shelf.h"
#include <vector>

using std::vector;

class BookShelf
{
public:
	BookShelf(int countShelfs, int countSlotsShelf);
	~BookShelf();
	void addBook(int idShelf, int idSlots, const PrintBook &book); // добавить книгу в шкаф по номеру полки и месту на полке
	PrintBook getBook(int idShelf, int idSlots); // получить книгу из шкафа по номеру полки и месту на полке
private:
	vector<Shelf> shelfs; // хранилище полок шкафа
};

