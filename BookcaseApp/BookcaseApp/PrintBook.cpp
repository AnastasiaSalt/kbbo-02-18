#include "stdafx.h"
#include "PrintBook.h"


PrintBook::PrintBook() : Book("none", 0)
{
	printPage = 0;
}

PrintBook::PrintBook(const string &name, int pages) : Book(name, pages)
{
	printPage = pages;
}


PrintBook::~PrintBook()
{
}

int PrintBook::getPages()
{
	return printPage;
}
