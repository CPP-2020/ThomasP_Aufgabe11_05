#include "Vehicle.h"
#include <string>
#include <iostream>

Vehicle::Vehicle(string name, Pos pos, int horsepower, int seats, string color) :
	name_(name), pos_(pos), horsepower_(horsepower), seats_(seats), color_(color)
{}

string Vehicle::getname()
{
	return name_;
}

Pos Vehicle::getpos()
{
	return pos_;
}

int Vehicle::gethorsepower()
{
	return horsepower_;
}

int Vehicle::getseats()
{
	return seats_;
}

string Vehicle::getcolor()
{
	return color_;
}
void Vehicle::enter(Person person)
{
	passengers.push_back(person);
	std::cout << "Wilkommen im Auto " << person.getname() << endl;
}

void Vehicle::exit(int seat_number)
{
	passengers.erase(passengers.begin() + seat_number);
}