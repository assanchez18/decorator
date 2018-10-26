#pragma once
#include <iostream>
#include <string>
using namespace std;

class IO
{
public:
	
	IO();
	~IO();

	string readString();
	int readInt();
	void printInt(int toPrint);
	void printString(string& toPrint);
protected:
	
};

