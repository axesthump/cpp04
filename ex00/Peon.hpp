//
// Created by casubmar on 30.11.2020.
//

#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP

#include "Victim.hpp"

class Peon: public Victim {

public:
	Peon(std::string const& name);
	Peon(Peon const& peon);
	~Peon();
	Peon& operator=(Peon const& peon);

	virtual void getPolymorphed() const;

private:
	Peon();
};


#endif //EX00_PEON_HPP
