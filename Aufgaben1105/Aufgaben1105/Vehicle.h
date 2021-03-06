#pragma once
#include "Position.h"
#include <string>
#include "Person.h"
using namespace std;
class Vehicle
{
public:
	Vehicle(string name, Pos pos, int horsepower, int seats, string color);
	void enter(Person person);
	void exit(int seat_number);
private:

	string name_;
	Pos pos_;
	int horsepower_;
	int seats_;
	string color_;
	string getname();
	Pos getpos();
	int gethorsepower();
	int getseats();
	string getcolor();
	vector<Person> passengers;
	
};

