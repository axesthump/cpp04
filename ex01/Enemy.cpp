//
// Created by Cave Submarine on 12/1/20.
//

#include "Enemy.hpp"

Enemy::Enemy() {}
Enemy::Enemy(int hp, const std::string &type): _hp(hp), _type(type) {}
Enemy::~Enemy() {}

Enemy::Enemy(const Enemy &enemy) {
	*this = enemy;
}

Enemy & Enemy::operator=(const Enemy &rhs) {
	if (this != &rhs) {
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}

const std::string & Enemy::getType() const {
	return this->_type;
}

int Enemy::getHP() const { return this->_hp; }

void Enemy::takeDamage(int dmg) {
	if (dmg < 0) {
		return ;
	} else {
		this->_hp -= dmg;
	}
}