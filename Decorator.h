#pragma once
#include "IO.h"

class Decorator : public IO
{
public:
	Decorator() {}
	Decorator(IO* object) {
		this->io = object;
	}
	~Decorator() {}
	
protected:
	virtual string readString() {
		return io->readString();
	}
	virtual int readInt() {
		return io->readInt();
	}
	virtual void printInt(int toPrint) {
		io->printInt(toPrint);
	}
	virtual void printString(string& toPrint) {
		io->printString(toPrint);
	}

	IO* io;
};

