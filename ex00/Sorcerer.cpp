//
// Created by casubmar on 30.11.2020.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer &src) {
	*this = src;
	std::cout << this->_name << ", " << this->_title << ", is born!\n";
}

Sorcerer & Sorcerer::operator=(const Sorcerer &rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	}
	return *this;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!\n";
}

std::ostream& operator<<(std::ostream& o, Sorcerer const& sorcerer) {
	o << "I am  "<< sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!\n";
	return o;
}

std::string Sorcerer::getTitle() const { return this->_title; }
std::string Sorcerer::getName() const { return this->_name; }

void Sorcerer::polymorph(const Victim& victim) const {
	victim.getPolymorphed();
}