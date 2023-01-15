#pragma once
#include <iostream>
#include "Buffer.h"
#include <memory>

using namespace std;

class BufferArr: public Buffer {
private:
	unique_ptr <int []> tab;
	int size;
	int ostaniePole;
public:
	BufferArr(int size1);
	int getSize();
	int getOstaniePole();

	void add(int element) override;
	void write() override;
	~BufferArr() ;
};