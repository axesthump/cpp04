//
// Created by Cave Submarine on 12/1/20.
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "SuperMutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}
SuperMutant::SuperMutant(const SuperMutant &superMutant):Enemy(superMutant.getHP(), superMutant.getType()) {}
SuperMutant & SuperMutant::operator=(const SuperMutant &superMutant) { return *this; }
SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int dmg) {
	Enemy::takeDamage(dmg - 3);
}