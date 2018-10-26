#include "pch.h"
#include "IO.h"

IO::IO()
{
}


IO::~IO()
{
}

string IO::readString() {
	string read;
	cout << "Introduce a string: ";
	cin >> read;
	return read;
}

int IO::readInt() {
	int read;
	cout << "Introduce an integer: ";
	cin >> read;
	return read;
}

void IO::printInt(int toPrint)
{
	cout << toPrint;
}

void IO::printString(string& toPrint)
{
	cout << toPrint;
}

