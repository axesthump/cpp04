//
// Created by Cave Submarine on 12/1/20.
//

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &RadScorpion):Enemy(RadScorpion.getHP(), RadScorpion.getType()) {}
RadScorpion & RadScorpion::operator=(const RadScorpion &RadScorpion) { return *this; }
RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}