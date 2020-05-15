#include "Person.h"
#include <string>
#include<iostream>
using namespace std;

Person::Person(string name, Nationality nationality) :name_(name), nationality_(nationality)
{}

void Person::greet(Person other)
{
	switch (nationality_)
	{
	case de: cout << "Hallo " << other.name_ << endl; break;
	case en: cout << "Hello " << other.name_ << endl; break;
	case it: cout << "Ciao " << other.name_ << endl; break;
	case es: cout << "Hola " << other.name_ << endl; break;
	default:
		break;
	}

}