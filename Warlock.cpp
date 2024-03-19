#include "Warlock.hpp"

Warlock::Warlock() {}
Warlock::~Warlock() {}

string Warlock::getName() {
	return _name;
}

void Warlock::setName(std::string &name) {
	_name = name;
}

string Warlock::getTitle() {
	return _title;
}

void Warlock::setTitle(std::string &title) {
	_title = title;
}
