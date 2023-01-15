#include "BufferFile.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;



BufferFile::BufferFile(string path1): file(make_unique<fstream>())
{
	cout << "Konstruktor BufferFile" << endl;
	this->path = path1;
	file->open(path1, fstream::out);
	file->close();
}
string BufferFile::getPath()
{
	return path;
}


void BufferFile::add(int element)
{
	file->open(path, fstream::app);
	*file << element << endl;
	file->close();
}
void BufferFile::write()
{
	cout << "BufferFile: " << endl;
	file->open(path, fstream::in);
	std::string line;
	while (getline(*file, line))
		cout << line << " ";
	std::cout << std::endl;
	file->close();
}
BufferFile::~BufferFile()
{
	cout << "Destruktor BufferFile" << endl;
}