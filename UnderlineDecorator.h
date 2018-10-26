#pragma once
#include "Decorator.h"
class UnderlineDecorator :
	public Decorator
{
public:
	UnderlineDecorator(IO* object) : Decorator(object) {
	}
	~UnderlineDecorator() {}
	void printString(string& toPrint) {
		__super::printString(toPrint);
		cout << endl <<  "_________";
		this->io->printString(toPrint);
	}


};

