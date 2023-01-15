#pragma once
#include <iostream>

using namespace std;

class Buffer {
public:
	virtual void add(int a) = 0;
	virtual void write() = 0;
	Buffer();


	~Buffer();
};
