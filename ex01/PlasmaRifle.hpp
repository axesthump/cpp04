//
// Created by Cave Submarine on 12/1/20.
//

#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {

public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const& src);
	PlasmaRifle& operator=(PlasmaRifle const& rhs);
	virtual ~PlasmaRifle();
	virtual void attack() const;

};


#endif //EX01_PLASMARIFLE_HPP
