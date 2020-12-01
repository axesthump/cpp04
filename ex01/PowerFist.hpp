//
// Created by Cave Submarine on 12/1/20.
//

#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon {

public:
	PowerFist();
	PowerFist(PowerFist const& src);
	virtual ~PowerFist();
	PowerFist& operator=(PowerFist const& rhs);
	virtual void attack() const;

private:
};


#endif //EX01_POWERFIST_HPP
