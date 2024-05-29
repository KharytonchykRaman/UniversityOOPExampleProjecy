#pragma once
#include "QueenBee.h"
#include "DroneBee.h"
#include "NurseBee.h"
#include "WorkerBee.h"
#include "ScoutBee.h"
#include "GuardBee.h"
#include "BuilderBee.h"

class Beehive
{
private:
	Bee* list;
	int size;

	string constructionType;
	double length;
	double width;
	double height;
	string material;
	int cell;
public:
	Beehive() : size(0), constructionType("default"), length(0), width(0), height(0), material("default"), cell(0) {};
	Beehive(string constructionType, double length, double width, double height, string material, int cell) :
		constructionType(constructionType), length(length), width(width), height(height), material(material), cell(cell) {};

	int getFirstIndex(Bee bee);
	void add(Bee bee);
	void remove(Bee bee);
	void remove(int index);
	Bee get(int index);
	int getSize();
	string convertToString();
	string getBeehiveInfo();
};