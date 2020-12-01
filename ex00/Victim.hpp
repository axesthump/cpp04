//
// Created by casubmar on 30.11.2020.
//

#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP

#include <iostream>

class Victim {

public:
	Victim(std::string const& name);
	~Victim();
	Victim(Victim const& src);
	Victim& operator=(Victim const& rhs);

	std::string const& getName() const;

	virtual void getPolymorphed() const;

private:
	std::string _name;
	Victim();

};

std::ostream& operator<<(std::ostream& o, Victim const& src);


#endif //EX00_VICTIM_HPP
