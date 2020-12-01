//
// Created by Cave Submarine on 12/1/20.
//

#ifndef EX01_RADSCORPION_HPP
#define EX01_RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion: public Enemy {

public:
	RadScorpion();
	RadScorpion(RadScorpion const& superMutant);
	RadScorpion& operator=(RadScorpion const& superMutant);
	virtual ~RadScorpion();

private:

};


#endif //EX01_RADSCORPION_HPP
