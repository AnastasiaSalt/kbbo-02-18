#pragma once

#include "Book.h"

class PrintBook : public Book
{
public:
	PrintBook();
	PrintBook(const string &name, int pages);
	~PrintBook();
	int getPages();
private:
	int printPage;
};

