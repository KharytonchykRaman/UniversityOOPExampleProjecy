#pragma once
#include "Group.h"
#include "Worker.h"

class Manager : public Worker {
public:
	static double getMaxMark(Group group);

	static double getMinMark(Group group);

	static double calcAvgMark(Group group);

	static Student getBestStudent(Group group);
};