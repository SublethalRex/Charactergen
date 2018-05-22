#pragma once

#ifndef CHAR_H
#define CHAR_H

#include <string>
using namespace std;



class Char {
public:
	Char();
	Char(std::string N, int H);
	~Char();

	string getName();
	void setName(string);
	int getHealth();
	void setHealth(int);
	void display();
protected:
	string name;
	int health;
private:
};



class Zombie : public Char {
public:
	Zombie();
	Zombie(string N, int H, int S, string W);
	int getSpeed();
	void setSpeed(int);
	string getWeapon();
	void setWeapon(string);
	void display();
private:
	int speed;
	string weapon;
};


class Goblin : public Char {
public:
	Goblin();
	Goblin(string N, int H, int P, string M);
	int getPower();
	void setPower(int P);
	string getMagic();
	void setMagic(string M);
	void display();
	
private:
	int power;
	string magic;
};
#endif