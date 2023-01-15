#pragma once
#include <iostream>
#include "Buffer.h"
#include <memory>

#include <fstream>
using namespace std;

class BufferFile : public Buffer {
private:
	unique_ptr <fstream> file;
	string path;
	
public:
	BufferFile(string path1);
	string getPath();

	void add(int element) override;
	void write() override;
	~BufferFile() ;
};