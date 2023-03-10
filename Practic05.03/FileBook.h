#pragma once
#include <iostream>
#include "Book.h"

#define READ	"r"
#define WRITE	"w"
#define APPEND	"a"

using namespace std;

class FileBook
{
	FILE* file;
	char* path;
	friend class Book;

public:
	FileBook(char* p) :path{ new char[100] } {
		strcpy_s(path, 100,p);
	}
	~FileBook() {
		delete[] path;
		fclose(file);
	}

	void SaveBookFile(Book*, int = 1);
	Book* LoadBookFile();
};

