#pragma once
#include "Worker.h"

class Professor : public Worker
{
public:
	Professor() {
		cout << "Professor constructor calling;"<<endl;
	}

	~Professor() {
		cout << "Professor destructor calling;" << endl;
	}
};

