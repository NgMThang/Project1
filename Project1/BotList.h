/*
	Nguyen, Minh Thang

	Fall 2025
	CS A250 - C++ 2

	Bot Elections
*/

#ifndef BOTLIST_H
#define BOTLIST_H

#include "BotType.h"

#include <string>
#include <set>

class BotList
{
public:
	void insertBot(const BotType&);
	int getCount() const;
	bool getBotByName(const std::string&, const BotType&) const;
	bool isEmpty() const;
	void printAllBotsNames() const;
	void printALLBotsInfo() const;
private:
	set<BotType> botList;
};

#endif
