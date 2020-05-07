#pragma once

#include <string>

using std::string;

class Book
{
public:
	Book(const string &name, int pages);
	~Book();
	string getName(); // ������� �������� �����
	int getPages();   // ������� ���-�� �������
 	void print();     // ����� ���������� � �����
protected:
	string name;
	int pages;
};

