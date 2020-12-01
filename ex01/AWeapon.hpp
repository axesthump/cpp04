//
// Created by Cave Submarine on 12/1/20.
//

#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP
#include <iostream>

class AWeapon {

private:
	std::string _name;
	int 		_dmg;
	int 		_actionPoints;

	AWeapon();
	AWeapon(AWeapon const& src);
	AWeapon& operator=(AWeapon const& rhs);
public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	std::string const& getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

};


#endif //EX01_AWEAPON_HPP
