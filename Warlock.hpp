#pragma once

#include "iostream"

using std::endl;
using std::cout;
using std::string;

class Warlock {
private:
	string _name;
	string _title;
public:
	Warlock();
	~Warlock();

	string getName();
	void setName(string& name);
	string getTitle();
	void setTitle(string& name);
};


