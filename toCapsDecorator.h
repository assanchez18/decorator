#pragma once

#include "Decorator.h"
class toCapsDecorator :
	public Decorator
{
public:
	toCapsDecorator(IO* object) {
		this->io = object;
	}
	~toCapsDecorator() {}
	void printString(string& toPrint) {
		toPrint += "-" + toPrint;
		this->io->printString(toPrint);
	}


};
