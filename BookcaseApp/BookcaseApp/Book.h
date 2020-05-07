#pragma once

#include <string>

using std::string;

class Book
{
public:
	Book(const string &name, int pages);
	~Book();
	string getName(); // вернуть название книги
	int getPages();   // вернуть кол-во страниц
 	void print();     // вывод информации о книге
protected:
	string name;
	int pages;
};

