//
// Created by casubmar on 30.11.2020.
//

#include "Peon.hpp"

Peon::Peon(std::string const& name): Victim(name) {
	std::cout << "Zog zog.\n";
}

Peon::Peon(const Peon &peon): Victim(peon.getName()) {
	std::cout << "Zog zog.\n";
	*this = peon;
}

Peon & Peon::operator=(const Peon &peon) {
	Victim::operator=(peon);
	return *this;
}

Peon::~Peon() {
	std::cout << "Bleuark...\n";
}

void Peon::getPolymorphed() const {
	std::cout << getName() << " has been turned into a pink pony!\n";
}