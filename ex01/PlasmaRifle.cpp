//
// Created by Cave Submarine on 12/1/20.
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():AWeapon( "Plasma Rifle", 5,  21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src): AWeapon(src.getName(), src.getAPCost(), src.getDamage()) {}

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle &rhs) { return *this; }

PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}