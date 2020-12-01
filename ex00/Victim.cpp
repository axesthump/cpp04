//
// Created by casubmar on 30.11.2020.
//

#include "Victim.hpp"

Victim::Victim(std::string const &name): _name(name) {
	std::cout << "Some random victim called " << this->_name << " just appeared!\n";
}

Victim::Victim(const Victim &src) {
	*this = src;
	std::cout << "Some random victim called " << this->_name << " just appeared!\n";
}

const std::string & Victim::getName() const { return this->_name; }

Victim & Victim::operator=(const Victim &rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
	}
	return *this;
}

Victim::~Victim() {
	std::cout << "Victim " << this->_name << " just died for no apparent reason!\n";
}

std::ostream& operator<<(std::ostream& o, Victim const& src) {
	o << "I'm " << src.getName() << " and I like otters!\n";
	return o;
}

void Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep!\n";
}