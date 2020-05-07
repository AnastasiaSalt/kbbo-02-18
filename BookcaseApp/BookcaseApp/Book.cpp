#include "stdafx.h"
#include "Book.h"
#include <iostream>

using namespace std;

Book::Book(const string & name, int pages)
{
	this->name = name;
	this->pages = pages;
}

Book::~Book()
{
}

string Book::getName()
{
	return name;
}

int Book::getPages()
{
	return pages;
}

void Book::print()
{
	cout << "Book " << name << " have " << pages << " pages" << endl;
}