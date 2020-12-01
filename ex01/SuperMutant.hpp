//
// Created by Cave Submarine on 12/1/20.
//

#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy {

public:
	SuperMutant();
	SuperMutant(SuperMutant const& superMutant);
	SuperMutant& operator=(SuperMutant const& superMutant);
	virtual ~SuperMutant();
	virtual void takeDamage(int);

private:

};


#endif //EX01_SUPERMUTANT_HPP
