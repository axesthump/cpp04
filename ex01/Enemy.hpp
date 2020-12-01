//
// Created by Cave Submarine on 12/1/20.
//

#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP

#include <iostream>

class Enemy
{
private:
	std::string _type;
	int 		_hp;

	Enemy();
	Enemy(Enemy const& enemy);
	Enemy& operator=(Enemy const& rhs);
public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	std::string const& getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};


#endif //EX01_ENEMY_HPP
