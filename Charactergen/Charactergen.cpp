// Charactergen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "Char.h"
using namespace std;

Char::Char() {}
Char::~Char() { cout << "Shape destructor called."; }

Char::Char(string N, int H) {
	name = N;
	health = H;
}

string Char::getName() { return name; }
void Char::setName(string N) { name = N; }

int Char::getHealth() { return health; }
void Char::setHealth(int H) { health = H; }

void Char::display() {
	cout << "This chreature is named " << name << " and has "
		<< health << " health." << endl << endl;
}

Zombie::Zombie() {}
Zombie::Zombie(string N, int H, int S, string W)
{
	name = N;
	health = H;
	speed = S;
	weapon = W;
}
int Zombie::getSpeed() { return speed; }
void Zombie::setSpeed(int S) { speed = S; }
void Zombie::display() {
	cout << "This zombie is named " << name
		<< " with " << health << " health,\n"
		<< "with speed = " << speed << endl << "and with a " << weapon << " weapon" << endl << endl;
}

Goblin::Goblin() {}
Goblin::Goblin(string N, int H, int P, string M)
	: Char::Char(N, H)
{
	power = P;
	magic = M;
}
int Goblin::getPower() { return power; }
void Goblin::setPower(int P) { power = P; }
string Goblin::getMagic() { return magic; }
void Goblin::setMagic(string M) { magic = M; }
void Goblin::display() {
	Char::display();
	cout << "It is a goblib with the name = " << name
		<< ", and with "<< health<< " health " << endl<< "and with " << power << " power and with " << magic << " magic" << endl << endl;
}
void Goblin::display() {
	
		cout << "It is a goblin with the name " << name
			<< " with " << health<< " and with "<< power << " power and "<< magic << " magic." << endl << endl;
	
}
