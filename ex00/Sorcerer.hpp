//
// Created by casubmar on 30.11.2020.
//

#ifndef EX00_SORCERER_HPP
#define EX00_SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {

public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer(Sorcerer const& src);
	Sorcerer& operator=(Sorcerer const& rhs);

	std::string getName() const;
	std::string getTitle() const;

	void polymorph(Victim const& victim) const;

private:
	std::string _name;
	std::string _title;

	Sorcerer();

};

std::ostream& operator<<(std::ostream& o, Sorcerer const& sorcerer);


#endif //EX00_SORCERER_HPP
